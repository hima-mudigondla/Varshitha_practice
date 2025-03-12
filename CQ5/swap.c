#include<stdio.h>
void swap(int a,int  b);
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("The swapped values are:%d %d\n",a,b);
}
int main()
{
	int a,b;
	printf("Enter the values of a and b:\n");
	scanf("%d%d",&a,&b);
	swap(a,b);
	return 0;
}
