#include<stdio.h>
void swap_array(int *arr,int *arr1,int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        temp=*(arr+i);
        *(arr+i)=*(arr1+i);
        *(arr1+i)=temp;
    }
}
int main()
{
    int size;
    printf("Enter the size of elements:\n");
    scanf("%d",&size);
    int arr[size],arr1[size];
    printf("Enter the elements of first array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",(arr+i));
    }
    printf("Enter the elements of second array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",(arr1+i));
    }
    swap_array(arr,arr1,size);
    printf("First array after swaping:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    printf("Second array after swaping:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(arr1+i));
    }
    return 0;
}
