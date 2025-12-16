#include<stdio.h>
int main()
{
    int size,temp,k=0,j=0;
    printf("Enter the array size:\n");
    scanf("%d",&size);
    int arr[size],odd[size],even[size];
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
        }
        else
        {
            odd[k]=arr[i];
            k++;
        }
    }
    printf("Odd elements:\n");
    for(int i=0;i<k;i++)
    {
        printf("%d ",odd[i]);
    }
    printf("\n");
    printf("Even elements:\n");
    for(int i=0;i<j;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
    return 0;
}
