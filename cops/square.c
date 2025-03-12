#include<stdio.h>
int main()
{
	int num,square,cube;
	printf("Enter the number:\n");
	scanf("%d",&num);
	square=num*num;
	cube=num*num*num;
	printf("Square of a number is:%d\n",square);
	printf("Cube of a number is:%d\n",cube);
	return 0;
}
