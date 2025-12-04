#include<stdio.h>
int main()
{
    int size,num,found=0,*p;
    printf("Enter the size of an array:\n");
    scanf("%d",&size);
    int arr[size];
    p=arr;
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",(p+i));
    }
    printf("Enter the number to search:\n");
    scanf("%d",&num);
    int i;
    for(i=0;i<size;i++)
    {
        if(*(p+i)==num)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("Element is found at %d index!\n",i);
    }
    else
    {
        printf("Element is not found!");
    }
    return 0;
}
