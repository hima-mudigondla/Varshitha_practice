#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter rows and columns:\n");
    scanf("%d%d",&r,&c);
    int mat[r][c];
    printf("Enter the elements of matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i<j)
            {
                mat[i][j]=0;
            }
        }
    }
    printf("Upper triangular matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i>j)
            {
                mat[i][j]=0;
            }
        }
    }
    printf("Lower triangular matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
