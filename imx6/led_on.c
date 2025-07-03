#include <stdio.h>

int main() {
char data[]="1";

    FILE *p = fopen("/sys/class/leds/user/brightness", "w");
    if (p == NULL) {
        perror("Failed to open brightness file");
        return 1;
    }
else
{
fputs(data,p);
fputs("\n",p);
fclose(p);
}
    return 0;
}

