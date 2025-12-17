#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the row and col:\n");
    scanf("%d%d",&row,&col);
    int arr[row][col],arr1[row][col],res[row][col];
    int (*p)[col]=arr;
    int (*q)[col]=arr1;
    int (*r)[col]=res;
    printf("Enter the matrix1:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",(*(p+i)+j));
        }
    }
    printf("Enter the matrix2:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",(*(q+i)+j));
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            *(*(r+i)+j)=0;
        }
    }
    printf("Resultant matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            for(int k=0;k<col;k++)
            {
                *(*(r+i)+j)+=(*(*(p+i)+k)) * (*(*(q+k)+j));
            }
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",*(*(r+i)+j));
        }
    }
    return 0;
}
