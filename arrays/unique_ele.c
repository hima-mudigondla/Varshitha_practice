#include<stdio.h>
int main()
{
	int a,count;
	printf("Enter the number of elements:\n");
	scanf("%d",&a);
	int arr[a];
	printf("Enter the elements of array:\n");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the unique elements of array:\n");
	for(int i=0;i<a;i++)
	{
		count=0;
		for(int j=0;j<a;j++)
		{
			if(i!=j)
			{
				if(arr[i]==arr[j])
					count++;
			}
		}
		if(count==0)
		{
			printf("%d ",arr[i]);
		}
	}
	printf("\n");
	return 0;
}
		
