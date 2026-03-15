#include<stdio.h>
#include<unistd.h>
int main()
{
	const char *path="/sys/class/leds/led2/brightness";
	while(1)
	{
		FILE *p=fopen(path,"w");
		if(p==NULL)
		{
			perror("failed to open the path");
			return 1;
		}
		fputs("1",p);
		printf("LED ON\n");
		fclose(p);
		sleep(1);
		p=fopen(path,"w");
		if(p==NULL)
		{
			perror("failed to open the path");
			return 1;
		}
		fputs("0",p);
		printf("LED OFF");
		fclose(p);
		sleep(1);
	}
	return 0;
}
