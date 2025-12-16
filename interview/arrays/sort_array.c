#include<stdio.h>
int main()
{
    int size,temp;
    printf("Enter the size of an array:\n");
    scanf("%d",&size);
    int arr[size],arr1[size];
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        arr1[i]=arr[i];
    }
    printf("Sort ascending order:\n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Sort descending order:\n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr1[i]>arr1[j])
            {
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr1[i]);
    }
}
