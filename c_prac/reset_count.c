#include<stdio.h>
int main()
{
	int num,count=0;
	printf("Enter the number:\n");
	scanf("%d",&num);
	for(int i=0;i<16;i++)
	{
		if(((num>>i)&1)==0)
			count++;
	}
	printf("Number of reset bits is:%d\n",count);
	return 0;
}
	
