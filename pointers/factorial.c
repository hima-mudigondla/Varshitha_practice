#include<stdio.h>
int main()
{
	int num,*fact;
	*fact=1;
	printf("Enter the number:\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		*fact*=i;
	}
	printf("The factorial of a given number is:%d\n",*fact);
	return 0;
}


