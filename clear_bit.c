#include<stdio.h>
int main()
{
	int num,clear_bit;
	printf("Enter the number and clear_bit:\n");
	scanf("%d%d",&num,&clear_bit);
	num&=~(1<<clear_bit);
	printf("The cleared bit is:%d\n",num);
        return 0;
}	
