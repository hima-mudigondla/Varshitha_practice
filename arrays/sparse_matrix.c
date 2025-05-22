#include<stdio.h>
int main()
{
    int r,c,count=0;
    printf("Enter the number of rows and columns:\n");
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
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count>((r*c)/2))
    {
        printf("Given matrix is sparse matrix!\n");
    }
    else
    {
        printf("Given matrix is not sparse matrix!\n");
    }
    return 0;
}
