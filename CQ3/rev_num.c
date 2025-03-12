#include<stdio.h>
int main()
{
	int num,rev=0,r;
	printf("Enter the number:\n");
	scanf("%d",&num);
	while(num>0)
	{
		r=num%10;
		rev=rev*10+r;
		num/=10;
	}
	printf("Reversed number is:%d\n",rev);
	return 0;
}
