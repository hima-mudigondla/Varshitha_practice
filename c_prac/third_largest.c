#include<stdio.h>
#include<limits.h>
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
	int first=-1,second=-2,third=-3;
	for(int i=0;i<a;i++)
	{
		if(arr[i]>first && first!=second && first!=second && first!=third)
		{
			third=second;
			second=first;
                      	first=arr[i];
		}
		else if(arr[i]>second && arr[i]<first && second!=third && second!=first)
		{ 
			third=second;
			second=arr[i];
		}
		else if(arr[i]<second && third!=first && third!=second)
		{
			third=arr[i];
		}
	}
	printf("First  largest element is:%d\n",first);
	printf("Secind largest element is:%d\n",second);
	printf("Third largest element is:%d\n",third);
	printf("Array elements:");
	for(int i=0;i<a;i++)
	{ 
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}

