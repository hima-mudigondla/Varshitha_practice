#include<stdio.h>
int main()
{
	int n,*p,temp=0;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	int arr[n];
	p=arr;
	printf("Enter the elements of array:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	printf("Sorted array:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((*(p+i))<(*(p+j)))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
	return 0;
}



