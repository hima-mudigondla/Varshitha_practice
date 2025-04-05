#include<stdio.h>
int prime(int );
int prime(int num)
{
	int count=0;
	if(num==1)
                printf("Neither prime nor composite\n");
	else
	{
		for(int i=2;i<num/2;i++)
		{
			if(num%i==0)
				count++;
		}
		if(count==0)
                	printf("Number is prime\n");
        	else
                	printf("Not prime\n");
	}
}
int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	prime(num);
	return 0;
}

