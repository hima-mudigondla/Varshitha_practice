#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
	pid_t pid1,pid2;
	int status;
	pid1=fork();
	if(pid1==0)
	{
		printf("Iam the child!\n");
		printf("Child process1 ID:%d\n",getpid());
		sleep(2);
		exit(0);
	}
	pid2=fork();
	if(pid2==0)
	{
		printf("I am the child!\n");
		printf("Child process2 ID:%d\n",getpid());
		sleep(2);
		exit(0);
	}
	printf("Parent %d waiting for child!\n",getpid());
	pid_t waited=waitpid(pid2,&status,0);
	if(waited==pid2)
	{
		if(WIFEXITED(status))
		{
			printf("Child 2 exited with exit code:%d\n",WEXITSTATUS(status));
		}
	}
	waited=waitpid(pid1,&status,0);
	if(waited==pid1)
	{
		if(WIFEXITED(status))
		{
			printf("Child 1 exited with exit code:%d\n",WEXITSTATUS(status));
		}
	}
	printf("Parent process exiting!\n");
	return 0;
}
