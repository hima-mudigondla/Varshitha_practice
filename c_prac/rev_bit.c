#include<stdio.h>
int main()
{
	short int num,rev=0;
	printf("Enter the number:\n");
	scanf("%hd",&num);
	while(num>0)
	{
		rev=rev<<1;
		if(num&1==1)
		{
			rev=rev^1;
		}
		num=num>>1;
	}
	printf("The reversed bits are:%d\n",rev);
	return 0;
}	
