#include<stdio.h>
int main()
{
	int a,count;
	printf("Enter the number of elements in array:\n");
	scanf("%d",&a);
	int arr[a],fr[a];
	printf("Enter the elements of array:\n");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
		fr[i]=-1;
	}
	for(int i=0;i<a;i++)
	{
		count=1;
		for(int j=i+1;j<a;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				fr[j]=0;
			}
		}
		if(fr[i]!=0)
			fr[i]=count;
	}
	for(int i=0;i<a;i++)
	{
		if(fr[i]!=0)
			printf("Frequency of %d is:%d\n",arr[i],fr[i]);
	}
	return 0;
}


