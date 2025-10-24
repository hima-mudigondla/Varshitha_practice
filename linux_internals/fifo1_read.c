#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	char buffer[100];
	int fd=open("/home/hima_varshitha/Varshitha_practice/hello.txt",O_RDONLY);
	read(fd,buffer,sizeof(buffer));
	printf("Message Received:%s\n",buffer);
	close(fd);
	return 0;
}
	
