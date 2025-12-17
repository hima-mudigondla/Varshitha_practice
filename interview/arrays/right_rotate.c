#include<stdio.h>
void right_rotate(int *arr,int size,int rot)
{
    rot=rot%size;
    for(int i=0;i<rot;i++)
    {
        int last=arr[size-1];
        for(int j=size-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=last;
    }
}
int main()
{
    int size,rot;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array  elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of rotations:\n");
    scanf("%d",&rot);
    right_rotate(arr,size,rot);
    printf("Array after rotations:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
