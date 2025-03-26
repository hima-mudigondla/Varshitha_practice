#include<stdio.h>
int main()
{
	int a,min,max;
	printf("Enter the number of elements:\n");
	scanf("%d",&a);
	int arr[a];
	printf("Enter the elements of an array:\n");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	max=arr[0];
	for(int i=0;i<a;i++)
	{
		if(arr[i]<min)
			min=arr[i];
		if(arr[i]>max)
			max=arr[i];
	}
	printf("The minimum element is:%d\n",min);
	printf("The maximum element is:%d\n",max);
	return 0;
}

