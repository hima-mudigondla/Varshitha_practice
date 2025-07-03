#include <stdio.h>
#include <unistd.h>

int main()
{
    const char *led_path = "/sys/class/leds/user/brightness";

    while (1) 
    {
        FILE *p = fopen(led_path, "w");
        if (p == NULL) 
	{
            perror("Failed to open brightness file");
            return 1;
         }
        fputs("1", p);
	printf("LED on\n");
        fclose(p);
        sleep(1);

        p = fopen(led_path, "w");
        if (p == NULL)
       	{
            perror("Failed to open brightness file");
            return 1;
        }
        fputs("0", p);
	printf("LED off\n");
        fclose(p);
        sleep(1);
    }

    return 0;
}



