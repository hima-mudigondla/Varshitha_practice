#include<stdio.h>
int main()
{
        int a;
        printf("Enter the value of a:\n");
        scanf("%d",&a);
        int arr[a];
        printf("Enter the elements of array:\n");
        for(int i=0;i<a;i++)
        {
                scanf("%d",&arr[i]);
        }
        int first=-1,second=-2;
        for(int i=0;i<a;i++)
        {
                if(arr[i]>first && first!=second)
                {
                        second=first;
                        first=arr[i];
                }
                else if(arr[i]>second && arr[i]<first && second!=first)
                {
                        second=arr[i];
                }
	}
        printf("Second largest element is:%d\n",second);
        return 0;
}
