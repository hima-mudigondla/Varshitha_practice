#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Before execle!");
	execle("/home/hima_varshitha/Varshitha_practice/arrays/merge_array","merge_array",(char *)0);
	printf("After execle!");
	perror("execle failed!");
	return 0;
}

