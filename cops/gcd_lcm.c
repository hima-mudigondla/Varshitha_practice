#include<stdio.h>
int main()
{
	int num1,num2,lcm,gcd,a,b;
	printf("Enter the numbers:\n");
	scanf("%d%d",&num1,&num2);
	a=num1;
	b=num2;
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	gcd=a;
	lcm=(num1*num2)/gcd;
	printf("Gcd of %d and %d is:%d\n",num1,num2,gcd);
	printf("lcm of %d and %d is:%d\n",num1,num2,lcm);
	return 0;
}
