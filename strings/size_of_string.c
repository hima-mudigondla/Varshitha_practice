#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	int arr[num];
	printf("Enter the elements:\n");
	for(int i=0;i<num;i++)
		scanf("%d",&arr[i]);
	printf("Array elements are:\n");
	for(int i=0;i<num;i++)
                printf("%d ",arr[i]);
	printf("\n");
	printf("size of array:%ld\n",sizeof(arr));
	printf("size of element:%ld",sizeof(arr[1]));
	return 0;
}

