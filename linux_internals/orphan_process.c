#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		printf("I'am the child process!\n");
		printf("Child process ID:%d\n",getpid());
		printf("Child's parent process ID:%d\n",getppid());
		sleep(10);
		printf("Child is still alive! its process id:%d\n",getpid());
		printf("Child's parent process ID after parent got exit:%d\n",getppid());

	}
	else
	{
		printf("I'am the parent process!\n");
		printf("Parent process ID:%d\n",getpid());
		printf("Parent's parent process ID:%d\n",getppid());
		exit(0);
	}
	while(1)
	{
	}
	return 0;
}
		
