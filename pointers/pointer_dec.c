#include<stdio.h>
int main()
{
	int x,z;
	printf("Enter the value  of x:\n");
	scanf("%d",&x);
	int *y=&x;
	printf("value of x is stored in address of y\n");
	printf("Address of x:%p\n",&x);
	printf("Address of z:%p\n",&z);
	printf("Address of y:%p\n",&y);
	printf("Address of y:%d\n",*y);
	printf("Address of y:%p\n",y);
	return 0;
}

