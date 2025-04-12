#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the values of x and y:\n");
	scanf("%d%d",&x,&y);
	int *p,*p1;
	p=&x;
	p1=&y;
	printf("Original x value:%d\n",x);
	printf("Original y value:%d\n",y);
	printf("Address of x:%p\n",&x);
	printf("Address of y:%p\n",&y);
	printf("Address of p:%p\n",&p);
	printf("Address of p1:%p\n",&p1);
	printf("Address of x at p:%p\n",p);
	printf("Address of y at p1:%p\n",p1);
	printf("Value at p:%d\n",*p);
	printf("Value at p1:%d\n",*p1);
	return 0;
}



