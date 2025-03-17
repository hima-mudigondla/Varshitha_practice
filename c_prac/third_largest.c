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
	int first=INT_MIN,second=INT_MIN,third=INT_MIN;
	for(int i=0;i<a;i++)
	{
		if(arr[i]>first)
		{
			third=second;
			second=first;
                      	first=arr[i];
		}
		else if(arr[i]>second && arr[i]<first)
		{ 
			third=second;
			second=arr[i];
		}
		else if(arr[i]<second)
		{
			third=arr[i];
		}
	}
	printf("Third largest element is:%d\n",third);
	printf("Array elements:");
	for(int i=0;i<a;i++)
	{ 
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}

