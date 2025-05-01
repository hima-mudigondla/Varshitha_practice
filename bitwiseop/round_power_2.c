#include<stdio.h>
int main()
{
	int num,base=1,rem,res=0,count=0,x;
	printf("Enter the number:\n");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%2;
		res+=rem*base;
		base*=10;
		num/=2;
	}
	while(res>0)
	{
		rem=res%10;
		count++;
		res/=10;
	}
	x=(1<<count);
	printf("Round of power 2:%d\n",x);
	return 0;
}


