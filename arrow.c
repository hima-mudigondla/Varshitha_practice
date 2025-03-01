#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the x,y values:\n");
	scanf("%d%d",&x,&y);
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=(2*2)+i;j++)
			printf("  ");
		for(int k=0;k<1;k++)
			printf("*");
		printf("\n");
	}
	for(int i=1;i<=y;i++)
	{
		printf("* ");
	}
	printf("\n");
	      
	for(int i=x;i>0;i--)
	{
		for(int j=1;j<=(2*2)+i;j++)
			printf("  ");
		for(int k=0;k<1;k++)
			printf("*");
		printf("\n");
	}
	return 0;
}

