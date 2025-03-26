#include<stdio.h>
int main()
{
	int size;
	printf("Enter the size of array:\n");
	scanf("%d",&size);
	int arr[size];
	printf("Array elements are:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Reversed array elements are:\n");
	for(int i=size-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
