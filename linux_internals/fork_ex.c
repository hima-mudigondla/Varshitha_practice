#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t child=fork();
	int i=1;
	while(i>0)
	{
		if(child==0)
		{
			printf("%d.I am the child process and pid:%d\n",i,getpid());
		}
		else if(child>0)
		{
			printf("%d.I am the parent process and pid:%d\n",i,getpid());
		}
		else
		{
			printf("Fork failed!\n");
		}
		sleep(1);
		i++;	
	}
	return 0;
}
