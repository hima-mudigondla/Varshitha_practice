#include<stdio.h>
int x;
static int c=6;
void add(int a,int b)
{
	printf("addition:%d\n",a+b);
	printf("Enter the value of x:\n");
	scanf("%d",&x);
}
int main()
{
	int a,b;
	extern int c;
	printf("Enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
	printf("The value of a and b:%d %d\n",a,b);
	add(a,b);
	printf("The value of x is:%d\n",x);
	printf("the value of c is:%d\n",c);
	return 0;
}



