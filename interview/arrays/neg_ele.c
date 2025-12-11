#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Negative elements in an array:\n");
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
