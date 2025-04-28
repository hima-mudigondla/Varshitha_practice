#include<stdio.h>
int main()
{
	int num,mask,pos;
	printf("Enter the hexadecimal number:\n");
	scanf("%x",&num);
	num=num & (~(0x1F<<2));
	printf("Obtained number:%x\n",num);
	return 0;
}

