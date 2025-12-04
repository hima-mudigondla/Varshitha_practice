#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the row and col size:\n");
    scanf("%d%d",&row,&col);
    int arr1[row][col],arr2[row][col],res[row][col];
    int (*p)[col]=arr1;
    int (*q)[col]=arr2;
    int (*r)[col]=res;
    printf("Enter the first matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",(*(p+i)+j));
        }
    }
    printf("Enter the second matrix:\n");
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
            for(int k=0;k<col;k++)
            {
                *(*(r+i)+j)=(*(*(p+i)+j)) * (*(*(q+i)+j));
            }
        }
    }
    printf("Resultant matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",*(*(r+i)+j));
        }
        printf("\n");
    } 
    return 0;
}
