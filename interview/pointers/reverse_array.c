#include<stdio.h>
void reverse(int *arr,int size)
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
    printf("Enter the elements of an array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",(arr+i));
    }
    reverse(arr,size);
    printf("Reversed array:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    return 0;
}
