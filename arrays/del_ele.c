#include<stdio.h>
int main()
{
	int a,i,j,ele;
	printf("Enter the number of elements:\n");
	scanf("%d",&a);
	int arr[a];
	printf("Enter the elements in array:\n");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to delete:\n");
	scanf("%d",&ele);
	for(i=0;i<a;i++)
	{
		if(arr[i]==ele)
		{
			break;	
		}
	}
	for(j=i;j<a-1;j++)
	{
		arr[j]=arr[j+1];
	}
	printf("Array after deleting element:\n");
	for(i=0;i<a-1;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}



