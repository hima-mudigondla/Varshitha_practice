#include<stdio.h>
int main()
{
	int num,set_bit;
	printf("Enter the number and the set bit:\n");
	scanf("%d%d",&num,&set_bit);
	num|=(1<<set_bit);
	printf("The set bit is:%d\n",num);
	return 0;
}
