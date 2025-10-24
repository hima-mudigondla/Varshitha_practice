#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sched.h>
#include<signal.h>
#define _GNU_SOURCE
#define STACK_SIZE 1024*1024
int child_func(void *arg)
{
	printf("Child message:PID:%d ,message=%s\n",getpid(),(char *)arg);
	return 0;
}
int main()
{
	char *stack=malloc(STACK_SIZE);
	if(!stack)
	{
		perror("stack");
		exit(1);
	}
	printf("Parent process id:%d\n",getpid());
	int pid=clone(child_func,stack+STACK_SIZE,SIGCHLD,"Hello clone!");
	if(pid==-1)
	{
		perror("clone");
		exit(1);
	}
	printf("clone() returned:%d\n",pid);
	free(stack);
	return 0;
}


