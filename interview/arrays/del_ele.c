#include<stdio.h>
int main()
{
    int size,ele;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of an array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to delete:\n");
    scanf("%d",&ele);
    int j;
    for(j=0;j<size;j++)
    {
        if(arr[j]==ele)
        {
            break;
        }
    }
    for(int i=j;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("Array after inserting an element:\n");
    for(int i=0;i<size-1;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

