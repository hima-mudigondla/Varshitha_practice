#include<stdio.h>
int main()
{
    int size,num,pos;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of an array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element and position to insert:\n");
    scanf("%d%d",&num,&pos);
    for(int i=size;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=num;
    printf("Array after inserting an element:\n");
    for(int i=0;i<=size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

