#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>
#include <unistd.h>

struct FileInfo {
    char name[512];
    char fullPath[1024];
    struct stat stats;
};

// Print file permissions
void printPermissions(mode_t mode) {
    printf((S_ISDIR(mode)) ? "d" : "-");
    printf((mode & S_IRUSR) ? "r" : "-");
    printf((mode & S_IWUSR) ? "w" : "-");
    printf((mode & S_IXUSR) ? "x" : "-");
    printf((mode & S_IRGRP) ? "r" : "-");
    printf((mode & S_IWGRP) ? "w" : "-");
    printf((mode & S_IXGRP) ? "x" : "-");
    printf((mode & S_IROTH) ? "r" : "-");
    printf((mode & S_IWOTH) ? "w" : "-");
    printf((mode & S_IXOTH) ? "x" : "-");
}

// Sorting helpers
int compareByTime(const void *a, const void *b) {
    struct FileInfo *f1 = (struct FileInfo *)a;
    struct FileInfo *f2 = (struct FileInfo *)b;
    return (f2->stats.st_mtime - f1->stats.st_mtime);
}

int compareBySize(const void *a, const void *b) {
    struct FileInfo *f1 = (struct FileInfo *)a;
    struct FileInfo *f2 = (struct FileInfo *)b;
    return (f2->stats.st_size - f1->stats.st_size);
}

// Print file info
void printFile(struct FileInfo file, int opt_l, int opt_h) {
    if (opt_l) {
        printPermissions(file.stats.st_mode);
        struct passwd *pw = getpwuid(file.stats.st_uid);
        struct group *gr = getgrgid(file.stats.st_gid);

        char timebuf[80];
        struct tm *timeinfo = localtime(&file.stats.st_mtime);
        strftime(timebuf, sizeof(timebuf), "%b %d %H:%M", timeinfo);

        double size = (double)file.stats.st_size;
        char sizeStr[20];
        if (opt_h) {
            if (size > (1 << 30))
                sprintf(sizeStr, "%.1fG", size / (1 << 30));
            else if (size > (1 << 20))
                sprintf(sizeStr, "%.1fM", size / (1 << 20));
            else if (size > (1 << 10))
                sprintf(sizeStr, "%.1fK", size / (1 << 10));
            else
                sprintf(sizeStr, "%ld", (long)size);
        } else {
            sprintf(sizeStr, "%ld", (long)size);
        }

        printf(" %3ld %-8s %-8s %8s %s %s\n",
               (long)file.stats.st_nlink,
               pw ? pw->pw_name : "?",
               gr ? gr->gr_name : "?",
               sizeStr,
               timebuf,
               file.name);
    } else {
        printf("%s  ", file.name);
    }
}

// Recursive listing
void listFiles(const char *path, const char *options) {
    DIR *dir = opendir(path);
    if (!dir) {
        perror("ls");
        return;
    }

    int opt_a = 0, opt_l = 0, opt_h = 0, opt_t = 0, opt_r = 0, opt_S = 0, opt_R = 0, opt_d = 0;
    if (options) {
        if (strchr(options, 'a')) opt_a = 1;
        if (strchr(options, 'l')) opt_l = 1;
        if (strchr(options, 'h')) opt_h = 1;
        if (strchr(options, 't')) opt_t = 1;
        if (strchr(options, 'r')) opt_r = 1;
        if (strchr(options, 'S')) opt_S = 1;
        if (strchr(options, 'R')) opt_R = 1;
        if (strchr(options, 'd')) opt_d = 1;
    }

    if (opt_d) {
        struct stat st;
        stat(path, &st);
        struct FileInfo f;
        snprintf(f.name, sizeof(f.name), "%s", path);
        f.stats = st;
        printFile(f, opt_l, opt_h);
        printf("\n");
        return;
    }

    struct dirent *entry;
    struct FileInfo files[2048];
    int count = 0;

    while ((entry = readdir(dir)) != NULL) {
        if (!opt_a && entry->d_name[0] == '.') continue;
        snprintf(files[count].name, sizeof(files[count].name), "%s", entry->d_name);
        snprintf(files[count].fullPath, sizeof(files[count].fullPath), "%s/%s", path, entry->d_name);
        stat(files[count].fullPath, &files[count].stats);
        count++;
    }
    closedir(dir);

    if (opt_t)
        qsort(files, count, sizeof(struct FileInfo), compareByTime);
    else if (opt_S)
        qsort(files, count, sizeof(struct FileInfo), compareBySize);

    if (opt_r) {
        for (int i = 0; i < count / 2; i++) {
            struct FileInfo temp = files[i];
            files[i] = files[count - i - 1];
            files[count - i - 1] = temp;
        }
    }

    printf("%s:\n", path);
    for (int i = 0; i < count; i++) {
        printFile(files[i], opt_l, opt_h);
    }
    if (!opt_l) printf("\n");

    if (opt_R) {
        for (int i = 0; i < count; i++) {
            if (S_ISDIR(files[i].stats.st_mode) &&
                strcmp(files[i].name, ".") != 0 &&
                strcmp(files[i].name, "..") != 0) {
                printf("\n");
                listFiles(files[i].fullPath, options);
            }
        }
    }
}

int main() {
    char path[512];
    char options[64];

    printf("Enter the directory path: ");
    fgets(path, sizeof(path), stdin);
    path[strcspn(path, "\n")] = 0;  // Remove newline

    if (strlen(path) == 0)
        strcpy(path, ".");  // Default to current directory

    printf("Enter options (-l, -a, -lh, -lt, -r, -R, -S, -d, etc): ");
    fgets(options, sizeof(options), stdin);
    options[strcspn(options, "\n")] = 0;

    if (strstr(options, "h") && strlen(path) == 0) {
        printf("\nOptions:\n");
        printf("  -a  Show all files (including hidden)\n");
        printf("  -l  Long listing format\n");
        printf("  -h  Human-readable sizes\n");
        printf("  -t  Sort by modification time\n");
        printf("  -r  Reverse order\n");
        printf("  -S  Sort by file size\n");
        printf("  -R  Recursive listing\n");
        printf("  -d  List directory itself, not contents\n");
        return 0;
    }

    listFiles(path, options);
    return 0;
}

