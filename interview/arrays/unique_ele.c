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
    printf("Unique elements of array:\n");
    for(int i=0;i<size;i++)
    {
        int count=0;
        for(int j=0;j<size;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
            }
        }
        if(count==0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}

