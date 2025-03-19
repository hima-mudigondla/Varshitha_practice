#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%x",&num);
	num=(((num&0x00FF0000)>>8)|((num&0x0000FF00)<<8)|(num&0xFF0000FF));
	printf("Number after swapped:0x%x\n",num);
	return 0;
}
