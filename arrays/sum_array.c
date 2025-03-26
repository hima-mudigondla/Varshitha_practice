#include<stdio.h>
int main()
{
	int a,sum=0;
	printf("Enter the number of elements:\n");
	scanf("%d",&a);
	int arr[a];
	printf("Enter the array elements:\n");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<a;i++)
	{
		sum+=arr[i];
	}
	printf("Result of addition of array:%d\n",sum);
	return 0;
}
