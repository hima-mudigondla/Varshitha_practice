#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
void listFiles(const char *path)
{
	DIR *dir=opendir(path);
	if(dir==NULL)
	{
		perror("ls");
		return;
	}
	struct dirent *entry;
	while((entry=readdir(dir))!=NULL)
	{
		if((entry->d_name[0]=='.' && entry->d_name[1]=='\0') || (entry->d_name[0]=='.' && entry->d_name[1]=='.' && entry->d_name[2]=='\0'))
			continue;
		printf("%s\n",entry->d_name);
	}
	closedir(dir);
}
int main()
{
	listFiles(".");
	printf("\n");
	listFiles("/home/hima_varshitha/Varshitha_practice/linux_internals");
	printf("\n");
	listFiles("../");
	return 0;
}
