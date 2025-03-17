#include<stdio.h>
#include<limits.h>
int main()
{
	int a,temp=INT_MAX;
	printf("Enter the size of array:\n");
	scanf("%d",&a);
	int arr[a];
	printf("Enter the elements of array:\n");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<a;i++)
	{
		if(temp>arr[i])
		{
			temp=arr[i];
		}
	}
	printf("Minimum value is:%d\n",temp);
	return 0;
}

