#include<stdio.h>
int main()
{
	int a,b,*p,*q;
	printf("Enter the values of a and b:\n");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	if(*p > *q)
		printf("a is bigger!\n");
	else
		printf("b is bigger!\n");
	return 0;
}
