#include<stdio.h>
int main()
{
	int size,count=0,j,i;
	printf("Enter the size of array:\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array after removing duplicates:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<count;j++)
		{
			if(arr[i]==arr[j])
				break;
		}
		if(j==count)
		{
			arr[count]=arr[i];
			count++;
		}
	}
	for(i=0;i<count;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}


