#include<stdio.h>
int main()
{
	short int num;
	printf("Enter the number:\n");
	scanf("%hd",&num);
	num=((0x0F00&num)>>8);
	printf("Obtained hexadecimal number is:%x\n",num);
	return 0;
}

