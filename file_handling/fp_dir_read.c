#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main()
{
        int fd;
        char data[30];
        fd=open("/home/hima_varshitha/test.txt",O_RDONLY);
        if(fd<0)
        {
                printf("File not opened\n");
        }
        else
        {
                printf("File opened\n");
      	}
        read(fd,data,sizeof(data));
	printf("%s\n",data);
        return 0;
}


