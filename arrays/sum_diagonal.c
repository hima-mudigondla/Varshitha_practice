#include<stdio.h>
int main()
{
    int mat[4][4],sum=0,sum1=0;
    printf("Enter the elements of matrix:\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
           scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i==j)
            {
                sum+=mat[i][j];
            }
        }
    }
    for(int i=0,j=3;i<4,j>=0;i++,j--)
    {
        
            //printf("%d %d\n",i,j);
            sum1+=mat[i][j];
        
    }
    printf("Sum of diagonal of matrix:%d\n",sum);
    printf("Sum of second diagonal of matrix:%d\n",sum1);
    return 0;
}
