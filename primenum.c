#include<stdio.h>
int main()
{
	int num,x=0,num1;
	printf("Enter the number:\n");
	scanf("%d",&num);
	if(num<=1)
	{
		printf("It is not prime\n");
	}
	else
	{
		for(int i=1;i<=num;i++)
		{
	 		num1=num%i;
			if(num1==0)
				x++;
		}
		if(x>2)
		{
			printf("Enter it is not prime\n");
		}
		else
		{
			printf("It is prime number\n");
		}
	}
	return 0;
}
