#include<stdio.h>
int main()
{
    int row,col,small,sec_small,large,sec_large;
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
    small=sec_small=*(*(p+0)+0);
    large=sec_large=*(*(p+0)+0);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(*(*(p+i)+j)>large)
            {
                sec_large=large;
                large=*(*(p+i)+j);
            }
            else if((*(*(p+i)+j)>sec_large) && (large!=sec_large))
            {
                sec_large=*(*(p+i)+j);
            }
            
            if(*(*(p+i)+j)<small)
            {
                sec_small=small;
                small=*(*(p+i)+j);
            }
            else if((*(*(p+i)+j)<sec_small) && (small!=sec_small))
            {
                sec_small=*(*(p+i)+j);
            }
        }
    }
    printf("Second largest element:%d\n",sec_large);
    printf("Second smallest element:%d\n",sec_small);
    return 0;
}
