#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two values:\n");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("Values after swapping:%d %d\n",a,b);
	return 0;
}
