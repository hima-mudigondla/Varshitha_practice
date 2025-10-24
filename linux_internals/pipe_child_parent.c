#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int fd[2];
	char buffer[100];
	pipe(fd);
	pid_t pid=fork();
	if(pid==0)
	{
		printf("Iam the child process!\n");
		close(fd[1]);
		read(fd[0],buffer,sizeof(buffer));
		printf("Child recieved:%s\n",buffer);
		close(fd[0]);
		exit(0);
	}
	else
	{
		printf("Iam the parent process!\n");
		close(fd[0]);
		char msg[]="Hello from parent process!";
		write(fd[1],msg,strlen(msg)+1);
		close(fd[1]);
	}
	return 0;
}

