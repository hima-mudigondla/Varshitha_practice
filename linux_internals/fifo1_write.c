#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd=open("/home/hima_varshitha/Varshitha_practice/hello.txt",O_WRONLY);
	char msg[]="Hello from fifo write to read!";
	write(fd,msg,strlen(msg)+1);
	close(fd);
	return 0;
}	


