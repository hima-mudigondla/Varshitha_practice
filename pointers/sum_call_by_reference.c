#include<stdio.h>
int sum(int *,int *);
int sum(int *a,int *b)
{
	int sum;
	sum=*a+*b;
	return sum;
}
int main()
{
	int x,y,sum1;
	printf("Enter two numbers:\n");
	scanf("%d%d",&x,&y);
	sum1=sum(&x,&y);
	printf("Sum of two variables is:%d\n",sum1);
	return 0;
}
