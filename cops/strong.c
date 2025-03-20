#include<stdio.h>
int main()
{
	int num,org_num,digit,fact,sum=0;
	printf("Enter the number:\n");
	scanf("%d",&num);
	org_num=num;
	while(num>0)
	{
		digit=num%10;
		fact=1;
		for(int i=1;i<=digit;i++)
		{
			fact*=i;
		}
		sum+=fact;
		num/=10;
	}
	if(sum==org_num)
		printf("%d is a strong number!\n",org_num);
	else
		printf("%d is not a strong number!\n",org_num);
	return 0;
}
