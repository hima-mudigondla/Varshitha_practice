#include<stdio.h>
int main()
{
        int a,temp;
        printf("Enter the number of elements:\n");
        scanf("%d",&a);
        int arr[a];
        printf("Enter the elements of array:\n");
        for(int i=0;i<a;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("Array in descending order:\n");
        for(int i=0;i<a;i++)
        {
                for(int j=i+1;j<a;j++)
                {
                        if(arr[i]<arr[j])
                        {
                                temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                        }
                }
        }
        for(int i=0;i<a;i++)
        {
                printf("%d ",arr[i]);
        }
        printf("\n");
        return 0;
}
                      
