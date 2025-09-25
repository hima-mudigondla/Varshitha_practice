#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Before execl!\n");
	execl("/home/hima_varshitha/Varshitha_practice/arrays/merge_array","merge_array",(char *)0);
	execl("/bin/ls","ls",(char *)0);
	perror("Exec failed!\n");
	return 0;
}
