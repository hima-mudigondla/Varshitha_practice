#include<stdio.h>
int main()
{
	int num,i,j;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("Enter the bit positions to swap:\n");
	scanf("%d%d",&i,&j);
	if(((num>>i)&1)!=((num>>j)&1))
	{
		num^=((1<<i)|(1<<j));
	}
	printf("Number after swapping %d and %d bits:%d\n",i,j,num);
	return 0;
}
















