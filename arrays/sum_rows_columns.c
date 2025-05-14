#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&r,&c);
    int mat[r][c],rsum[r],csum[c];
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
        rsum[i]=0;
        for(int j=0;j<c;j++)
        {
            rsum[i]+=mat[i][j];
        }
    }
    for(int i=0;i<c;i++)
    {
        csum[i]=0;
        for(int j=0;j<r;j++)
        {
            csum[i]+=mat[j][i];
        }
    }
    printf("The sum of elements of rows:\n");
    for(int i=0;i<r;i++)
    {
        printf("%d ",rsum[i]);
    }
    printf("\n");
    printf("The sum of elements of columns:\n");
    for(int i=0;i<c;i++)
    {
        printf("%d ",csum[i]);
    }
    printf("\n");
    return 0;
}
