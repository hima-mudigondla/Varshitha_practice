#include<stdio.h>
int main()
{
    int size,size1,j=0;
    printf("Enter the size of 2 arrays:\n");
    scanf("%d%d",&size,&size1);
    int arr[size],arr1[size1],arr2[size+size1];
    printf("Enter the elements of first array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements of second array:\n");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<(size+size1);i++)
    {
        if(i<size)
        {
            arr2[i]=arr[i];
        }
        else
        {
            arr2[i]=arr1[j];
            j++;
        }
    }
    printf("Merged array:\n");
    for(int i=0;i<(size+size1);i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}
