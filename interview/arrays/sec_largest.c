#include<stdio.h>
int main()
{
    int size,temp,first=-1,second=-2;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]>first && first!=second)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]<first && second!=first)
        {
            second=arr[i];
        }
    }
    printf("Second largest element:%d\n",second);
    return 0;
}
