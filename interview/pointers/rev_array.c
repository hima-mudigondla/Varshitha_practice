#include<stdio.h>
void rev_array(int *arr,int size)
{
    int temp;
    for(int i=0,j=size-1;i<j;i++,j--)
    {
        temp=*(arr+i);
        *(arr+i)=*(arr+j);
        *(arr+j)=temp;
    }
}
int main()
{
    int size;
    printf("Enter the size of an array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",(arr+i));
    }
    rev_array(arr,size);
    printf("Reversed array:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}
