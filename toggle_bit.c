#include<stdio.h>
int main()
{
	int num,tog_bit;
	printf("Enter the number amd toggle bit:\n");
	scanf("%d%d",&num,&tog_bit);
	num^=(1<<tog_bit);
	printf("The toggled bit is:%d\n",num);
	return 0;
}

