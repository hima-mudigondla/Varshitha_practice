#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			printf("  ");
		}
		for(int k=n-1;k>=i;k--)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
