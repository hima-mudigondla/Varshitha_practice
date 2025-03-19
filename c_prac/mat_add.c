#include<stdio.h>
int main()
{
	int mat1[3][4],mat2[3][4];
	printf("Enter elements of first matrix:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the elements of second matrix:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("Addition of two matrices:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d ",mat1[i][j]+mat2[i][j]);
			//printf("%d %d\n",i,j);
		}
		printf("\n");
	}
	return 0;
}

