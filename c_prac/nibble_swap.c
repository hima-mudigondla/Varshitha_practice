#include<stdio.h>
int main()
{
	short int num;
	printf("Enter the number:\n");
	scanf("%hx",&num);		
	num=(((num&0x0F)<<4)|((num&0xF0)>>4));
	printf("Obtained number after swapping:0x%hx\n:",num);
	return 0;
}


