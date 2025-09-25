#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	char *args[]={NULL};
	printf("Calling......%d\n",getpid());
	execvp("./fork_ex",args);
	printf("Done!\n");
	return 0;
}

