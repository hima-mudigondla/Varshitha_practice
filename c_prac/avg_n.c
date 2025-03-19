#include<stdio.h>
int main()
{ 
	int num,sum=0;
	float avg;
	printf("Enter the number:\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		sum+=i;
	}
	avg=sum/(float)num;
	printf("Average of %d numbers:%f\n",num,avg);
	return 0;
}


