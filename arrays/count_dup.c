#include<stdio.h>
int main()
{
	int a,b,count=0,x=0,i,j;
	printf("Enter the number of elements  in array:\n");
	scanf("%d",&a);
	int arr[a];
	printf("Enter the elements of array:\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Number of duplicates in array:\n");
	for(i=0;i<a;i++)
	{
		count=0;
		for(j=0;j<a;j++)
		{
			if(i!=j)
			{
				if(arr[i]==arr[j])
				{
					count++;
					break;
				}
			}
		}
		if(count>0 && j>i)
		{
			x++;
		}	
	}
	printf("%d\n",x);
	return 0;
}
