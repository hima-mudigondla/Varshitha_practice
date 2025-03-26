#include<stdio.h>
int main()
{
	int a,j=0,k=0;
	printf("Enter the number of elements in an array:\n");
	scanf("%d",&a);
	int arr[a],arr1[a],arr2[a];
	printf("Enter the elements of an array:\n");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<a;i++)
	{
		if(arr[i]%2==0)
		{
			arr1[j]=arr[i];
			j++;
		}
		else
		{
			arr2[k]=arr[i];
			k++;
		}
	}
	printf("Even array:\n");
	for(int i=0;i<j;i++)
		printf("%d ",arr1[i]);
	printf("\n");
	printf("Odd array:\n");
	for(int i=0;i<k;i++)
		printf("%d ",arr2[i]);
	printf("\n");
	return 0;
}
	

