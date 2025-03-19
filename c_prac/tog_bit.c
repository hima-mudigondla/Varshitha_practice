#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:\n");
       	scanf("%d",&num);
	if(((num>>5)&1) == ((num>>10)&1))
		num^=(1<<12);
	else
		num&=~((1<<5)|(1<<10));
	printf("Result obtained:%d\n",num);
	return 0;
}	
