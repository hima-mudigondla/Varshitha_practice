#include<stdio.h>
int main()
{
	int num,fact=1;
	printf("Enter the number:\n");
	scanf("%d",&num);
	for(int i=2;i<=num;i++)
	{
		fact*=i;
	}
	printf("Factorial of number is:%d\n",fact);
	return 0;
}
