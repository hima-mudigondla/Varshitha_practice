#include<stdio.h>
int main()
{
    int size,temp;
    printf("Enter the array size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=size-1;i<j;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("Reversed elements of array:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
