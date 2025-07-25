#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	pid_t child=fork();
	if(child<0)
	{
		printf("Fork failed!\n");
	}
	else if(child==0)
	{
		printf("I am the child process and pid:%d!\n",getpid());
		exit(0);
	}
	else
	{
		printf("I am the parent processand pid:%d!\n",getpid());
		sleep(30);
		printf("Parent exiting!\n");
	}
	return 0;
}
