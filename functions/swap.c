#include<stdio.h>
void swap(int *,int *);
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int x,y;
	printf("Enter the values of a and b:\n");
	scanf("%d%d",&x,&y);
	printf("Before swapping:%d %d\n",x,y);
	swap(&x,&y);
	printf("After swapping:%d %d\n",x,y);
	return 0;
}
