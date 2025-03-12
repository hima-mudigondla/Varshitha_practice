#include<stdio.h>
int main()
{
	int x;
	printf("Enter the value of x:\n");
	scanf("%d",&x);
	int y=++x;
	int z=x++;
	printf("After Pre-increment:%d\n",y);
	printf("After Post-increment:%d\n",z);
	return 0;
}

