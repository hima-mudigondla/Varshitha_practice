#include<stdio.h>
int square(int);
int square(int num)
{
	return (num*num);
}
int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("Square of a number is:%d\n",square(num));
	return 0;
}

