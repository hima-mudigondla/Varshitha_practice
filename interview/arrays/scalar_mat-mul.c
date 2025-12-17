#include<stdio.h>
int main()
{
    int row,col,scalar;
    printf("Enter the row and col:\n");
    scanf("%d%d",&row,&col);
    int arr[row][col];
    int (*p)[col]=arr;
    printf("Enter the matrix elements:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",(*(p+i)+j));
        }
    }
    printf("Enter the scalar number:\n");
    scanf("%d",&scalar);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            *(*(p+i)+j) *= scalar;
        }
    }
    printf("Scalar matrix multiplication:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",*(*(p+i)+j));
        }
    }
    return 0;
}
