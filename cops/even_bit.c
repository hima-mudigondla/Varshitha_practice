#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	num&=1;
	if(num==0)
		printf("Number is even\n");
	else
		printf("Number is odd\n");
	return 0;
}
