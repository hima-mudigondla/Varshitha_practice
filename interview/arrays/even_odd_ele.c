#include<stdio.h>
int main()
{
    int size,count=0,count1=0;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
        else
        {
            count1++;
        }
    }
    printf("Even elements:%d\n",count);
    printf("Odd elements:%d\n",count1);
    return 0;
}
