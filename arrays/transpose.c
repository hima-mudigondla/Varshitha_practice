#include<stdio.h>
int main()
{
        int r,c;
        printf("Enter the row and column:\n");
        scanf("%d%d",&r,&c);
        int mat[r][c],t_mat[c][r];
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
                    t_mat[j][i]=mat[i][j];
                }
        }
        printf("Transpose matrix:\n");
        for(int i=0;i<c;i++)
        {
                for(int j=0;j<r;j++)
                {
                        printf("%d ",t_mat[i][j]);
                }
                printf("\n");
        }
        return 0;
}

