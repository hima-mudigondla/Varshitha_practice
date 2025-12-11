#include<stdio.h>
int main()
{
    int size,sum=0;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sum of elements in an array:\n");
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}
