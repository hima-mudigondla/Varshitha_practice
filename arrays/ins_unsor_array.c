#include<stdio.h>
int main()
{
	int a,ele,pos,i;
	printf("Enter the size of array:\n");
	scanf("%d",&a);
	printf("Enter the elements of array:\n");
	int arr[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to insert:\n");
	scanf("%d",&ele);
	printf("Enter the position to insert:\n");
	scanf("%d",&pos);
	for(i=a;i>pos-1;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[i]=ele;
	printf("Array elements after inserting element:\n");
	for(i=0;i<=a;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}

