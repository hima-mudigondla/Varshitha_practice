#include<stdio.h>
int main()
{
	int num,count=0;
	printf("Enter the number:\n");
	scanf("%d",&num);
	while(num>0)
	{
		num/=10;
		count++;
	}
	printf("Number of digits:%d\n",count);
	return 0;
}

