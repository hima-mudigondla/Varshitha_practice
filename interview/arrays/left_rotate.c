#include<stdio.h>
void left_rotate(int *arr,int size,int rot)
{
    rot=rot%size;
    for(int i=0;i<rot;i++)
    {
        int first=arr[0];
        for(int j=0;j<size;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[size-1]=first;
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
    left_rotate(arr,size,rot);
    printf("Array after rotations:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
