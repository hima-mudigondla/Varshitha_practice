#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Before exec!\n");
	execlp("merge_array","merge_array",(char *)0);
	perror("execlp failed!");
        printf("After exec!\n");
	return 0;
}

