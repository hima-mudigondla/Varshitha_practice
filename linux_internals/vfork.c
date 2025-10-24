#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int b=500;
int main()
{
	int a=100;
	printf("Parent pid:%d\n",getpid());
	pid_t pid =vfork();
	if(pid<0)
	{
		perror("vfork failed");
		exit(1);
	}
	else if(pid==0)
	{
		printf("This is a child process!\n");
		printf("Child pid:%d\n",getpid());
		printf("Child a val:%d  b val:%d\n",a,b);
		int d=1000;
		b=200;
		a=600;
		printf("child b and a val:%d %d\n",b,a);
		printf("d value:%d\n",d);
		_exit(0);
	}
	else
	{
		printf("Parent resumes, pid:%d\n",getpid());
		printf("Parents a val:%d b val:%d\n",a,b);
		int d;
		printf("parent d val:%d\n",d);
	}
	return 0;
}
