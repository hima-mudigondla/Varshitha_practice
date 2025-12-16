#include<stdio.h>
void sort_array(int *arr,int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(*(arr+i) > *(arr+j))
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
    int size,j=0,k=0;
    printf("Enter the size of an array:\n");
    scanf("%d",&size);
    int arr[size],even[size],odd[size];
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
    printf("Even sorted array:\n");
    sort_array(even,j);
    for(int i=0;i<j;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
    printf("Odd sorted array:\n");
    sort_array(odd,j);
    for(int i=0;i<k;i++)
    {
        printf("%d ",odd[i]);
    }
    return 0;
}
