#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        int count=0,flag=0;
        for(int j=0;j<i;j++)
        {
            if(arr[j]==arr[i])
            flag=1;
        }
        if(flag==0)
        {
            for(int k=0;k<size;k++)
            {
                if(arr[k]==arr[i])
                {
                    count++;
                }
            }
            printf("%d repeated %d times\n",arr[i],count);
        }
        
    }
    return 0;
}

