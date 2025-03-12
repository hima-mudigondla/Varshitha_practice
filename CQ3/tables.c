#include<stdio.h>
int main()
{
	int num,start,end,prod=1;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("Enter the start and end points:\n");
	scanf("%d%d",&start,&end);
	for(int i=1;i<=num;i++)
	{
		for(int j=start;j<=end;j++)
		{
			prod=i*j;
			printf("%d*%d=%d",i,j,prod);
			printf("\n");
		
		}
		printf("\n");
	}
	return 0;
}
