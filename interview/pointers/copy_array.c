#include<stdio.h>
void copy_array(int *arr,int *arr1,int size)
{
    for(int i=0;i<size;i++)
    {
        *(arr1+i)=*(arr+i);
    }
}
int main()
{
    int size;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int arr[size],arr1[size];
    int *p,*q;
    p=arr;
    q=arr1;
    printf("Enter the elements of array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",(p+i));
    }
    copy_array(p,q,size);
    printf("Copied array elements:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(q+i));
    }
    return 0;
}
