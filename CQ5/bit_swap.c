#include<stdio.h>
int main()
{
	int num,sb1,sb2;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("Enter the swap bits:\n");
	scanf("%d%d",&sb1,&sb2);
	num^=(1<<sb1)|(1<<sb2);
	printf("After bit swapped:%d\n",num);
	return 0;
}
