#include<stdio.h>
int main()
{
	int size,num,i;
	printf("Enter the size of array:\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array elements:\n");
	for (int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter number to search:\n");
	scanf("%d",&num);
	for(i=0;i<size;i++)
	{
		if(num==arr[i])
		{
			printf("Given number %d is present at %d index\n",num,i);
			break;
		}

	}
	if(size==i)
		printf("The given number is not present in array\n");
	return 0;
}
