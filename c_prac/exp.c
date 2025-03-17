#include<stdio.h>
int main()
{
	int a,b,c,x,exp;
	printf("Enter the values of a,b,c,x:\n");
	scanf("%d%d%d%d",&a,&b,&c,&x);
	exp=(a*(x*x))+(b*x)+c;
	printf("The solved expression is:%d\n",exp);
	return 0;
}


