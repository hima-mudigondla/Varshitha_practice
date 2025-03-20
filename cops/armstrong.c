#include<stdio.h>
#include<math.h>
int main()
{
	int num,count=0,digit,sum=0,n;
	printf("Enter the number:\n");
	scanf("%d",&num);
	n=num;
	while(n>0)
	{
		n/=10;
		count++;
	}
	printf("Count value %d\n",count);
	n=num;
	while(n>0)
	{
		digit=n%10;
		sum+=pow(digit,count);
		n/=10;
	}
	if(num==sum)
		printf("%d is armstrong number!!\n",num);
	else
		printf("%d is not armstrong number!!\n",num);
	return 0;
}

