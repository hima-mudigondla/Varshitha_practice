#include<stdio.h>
int main()
{
	int a,b,*p,*q,sum;
	printf("enter the values of a and b:\n");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	sum=*p+*q;
	printf("Sum of two variables:%d\n",sum);
	return 0;
}
