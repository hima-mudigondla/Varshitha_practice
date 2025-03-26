#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number of elements in array:\n");
	scanf("%d",&a);
	int arr1[a],arr2[a];
	printf("Enter the elements of the array:\n");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Elements stored in first array:\n");
	for(int i=0;i<a;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	printf("Elements copied to second array:\n");
	for(int i=0;i<a;i++)
	{
		arr2[i]=arr1[i];
	}
	for(int i=0;i<a;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
	return 0;
}
