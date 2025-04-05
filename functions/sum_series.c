#include<stdio.h>
int sum_series(int );
int sum_series(int num)
{
	int sum=0;
	for(int i=0;i<=num;i++)
		sum+=i;
	printf("Sum of series upto x:%d is:%d\n",num,sum);
	return 0;
}
int main()
{
	int x;
	printf("Enter the value of x:\n");
	scanf("%d",&x);
	sum_series(x);
	return 0;
}

