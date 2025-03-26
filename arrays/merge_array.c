#include<stdio.h>
int sort(int arr[],int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	return arr[size];
}
int main()
{
	int a,a1,j=0;
	printf("Enter the number of elements in array1,array2:\n");
	scanf("%d%d",&a,&a1);
	int arr1[a],arr2[a1];
	printf("Elements of first array:\n");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Elements of second array:\n");
	for(int i=0;i<a1;i++)
	{
		scanf("%d",&arr2[i]);
	}
	arr1[a]=sort(arr1,a);
	arr2[a1]=sort(arr2,a1);
	int arr3[a+a1];
	for(int i=0;i<a+a1;i++)
	{
		if(i<a)
		{
			arr3[i]=arr1[i];
		}
		else
		{
			arr3[i]=arr2[j];
			j++;
		}
	}
	arr3[a+a1]=sort(arr3,a+a1);
	printf("The merged and sorted array is:\n");
	for(int i=0;i<a+a1;i++)
	{
		printf("%d ",arr3[i]);
	}
	printf("\n");
	return 0;
}

