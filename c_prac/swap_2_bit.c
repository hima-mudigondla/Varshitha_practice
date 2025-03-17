#include<stdio.h>
int main()
{
	int num,num1;
	printf("Enter the number:\n");
	scanf("%d",&num);
	if(((num>>2)&1)!=((num>>8)&1))
	{
		num^=((1<<2)|(1<<8));
		printf("After 2 and 8 bits swapped:%d\n",num);
	}
	if(((num>>4)&1)!=((num>>10)&1))
        {
                num^=((1<<4)|(1<<10));  
		printf("After 4 and 10 bits swapped:%d\n",num);
	}	
	return 0;
}
