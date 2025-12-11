#include<stdio.h>
int main()
{
    int size,count=0;
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
        if(arr[i]<0)
        {
            count++;
        }
    }
    printf("Negative elements:%d\n",count);
    return 0;
}
