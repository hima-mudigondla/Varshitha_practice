#include<stdio.h>
void sort_array(int *arr,int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if((*(arr+i))>(*(arr+j)))
            {
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
}
int main()
{
    int size;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort_array(arr,size);
    printf("Sorted array:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

