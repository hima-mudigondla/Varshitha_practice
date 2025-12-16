#include<stdio.h>
int main()
{
    int size,key,found=0,i=0;
    printf("Enter the size of an array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key element to search:\n");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("Element is found at index:%d\n",i);
    }
    else
    {
        printf("Element is not found!\n");
    }
    return 0;
}
