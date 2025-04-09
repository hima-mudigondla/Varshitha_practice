#include<stdio.h>
int search_ele(int,int *,int);
int main()
{
	int size,num,ele;
	printf("Enter the size:\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the elements of array:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to search:\n");   
	scanf("%d",&num);
	ele=search_ele(num,arr,size);
	if(ele==0)
		printf("Given number is not found\n");
	else
		printf("Given number is at %d index\n",ele);
	return 0;
}
int search_ele(int num,int *x,int size)
{
	for(int i=0;i<size;i++)
	{
		if(*(x+i)==num)
			return i;
	}
	return 0;
}

