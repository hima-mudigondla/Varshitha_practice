#include<stdio.h>
int main()
{
	int a,b,max,min;
	printf("Enter the numbers:\n");
	scanf("%d%d",&a,&b);
	max=a*(a>b)+b*(b>a);
	min=a*(a<b)+b*(b<a);
	printf("Maximum number is:%d\n",max);
	printf("Minimum number is:%d\n",min);
	return 0;
}

