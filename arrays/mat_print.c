#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter the number of rows nad columns:\n");
	scanf("%d%d",&r,&c);
	int arr[r][c];
	printf("Enter the elements of matrix:\n"); 
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The matrix is:\n");
	for(int i=0;i<r;i++)
        {
                for(int j=0;j<c;j++)
                {
                        printf("%d ",arr[i][j]);
                }
		printf("\n");
        }
	return 0;
}


