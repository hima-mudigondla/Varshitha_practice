#include<stdio.h>
int main()
{
	int n,mid,l,r,key,found=0;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the key to search:\n");
	scanf("%d",&key);
	l=0;
	r=n-1;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(key==arr[mid])
		{
			printf("Element is found at index:%d",mid);
			found=1;
			break;
		}
		else if(arr[mid]<key)
		{
			l=mid+1;
		}
		else 
		{
			r=mid-1;
		}
	}
	if(!found)
	{
		printf("Key element is not found in array!!\n");
	}
	printf("\n");
	return 0;
}


