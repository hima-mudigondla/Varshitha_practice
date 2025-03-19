#include<stdio.h>
int main()
{
	int num,count=0;
	printf("Enter the number:\n");
	scanf("%d",&num);
	for(int i=1;i<num/2;i++)
	{
		if(num%i==0)
			count++;
	}
	if(count==1)
		printf("%d is prime!\n",num);
	else
		printf("%d is consonant!\n",num);
	return 0;
}
		

