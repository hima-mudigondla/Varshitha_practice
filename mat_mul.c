#include<stdio.h>
int main()
{
	int mat1[10][10],mat2[10][10],r1,r2,c1,c2,res[10][10];
	printf("Enter the number of rows and columns of mat1:\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter the number of rows and columns of mat2:\n");
	scanf("%d%d",&r2,&c2);
	printf("Enter the elements of first matrix:\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the elements of second matrix:\n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	for(int i=0;i<r1;i++)
        {
                for(int j=0;j<c2;j++)
                {
                        res[i][j]=0;
                }
        }
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			for(int k=0;k<c1;k++)
			{
				res[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
	printf("Result matrix:\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
	return 0;
}
