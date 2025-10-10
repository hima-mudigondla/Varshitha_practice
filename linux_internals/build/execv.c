#include<stdio.h>
#include<unistd.h>
int main()
{
	char *args[]={"merge_array","input1","input2",NULL};
	printf("Before exec!\n");
	execv("/home/hima_varshitha/Varshitha_practice/arrays/merge_array",args);
	perror("exec failed!");
	printf("After exec!\n");
	return 0;
}
