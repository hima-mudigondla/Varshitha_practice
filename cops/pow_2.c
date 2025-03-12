#include<stdio.h>
int main()
{
	int num,res;
	printf("Enter the number:\n");
	scanf("%d",&num);
	res=(num&(num-1));
	if(res==0)
		printf("Given number is power of 2\n");
	else
		printf("Given number is not power of 2\n");
	return 0;
}
