#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int status;
	pid_t pid=fork();
	if(pid==0)
	{
		printf("I am child process\n");
		printf("Child Process ID:%d\n",getpid());
		printf("Child's parent process ID:%d\n",getppid());
		exit(2);
	}
	else
	{
		printf("I am parent process\n");
		printf("Parent process ID:%d\n",getpid());
		pid=wait(&status);
		printf("Child ID is %d and status is %d\n",pid,status);
	        if((status & 0xff)!=0)
		{
			printf("Process terminated Abnormally!\n");
		}
		else
		{
			printf("Process terminated normally!\n");
		}
	}
	return 0;
}

