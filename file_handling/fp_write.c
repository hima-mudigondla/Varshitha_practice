#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main()
{
        int fd;
        char data[100];
        fd=open("/home/hima_varshitha/test.txt",O_WRONLY|O_CREAT|O_TRUNC);
        if(fd>=0)
        {
                printf("File created successfully\n");
                printf("Enter the data:\n");
                scanf("%[^\n]",data);
        //      getchar();

        }
        else
        {
                printf("File not opened\n");
        }
        int x=write(fd,data,strlen(data));
        if(x>0)
        {
                printf("Data written successfully\n");
        }
        else
        {
                printf("Data not written\n");
        }
        close(fd);
        return 0;
}

   
