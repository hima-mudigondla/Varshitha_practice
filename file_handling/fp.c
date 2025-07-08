#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
	int fd;
	char buf[11];
	fd=open("/home/hima_varshitha/Varshitha_practice/file_handling/hello.txt", O_RDWR);
	if(fd>0)
	{
		printf("File created successfully!\n");
	}
	else
	{
		printf("Failed to open file!\n");
	}
	write(fd,"Hello world",11);
	lseek(fd,0,SEEK_SET);
	read(fd,buf,sizeof(buf));
	printf("%s\n",buf);
	return 0;	

}
