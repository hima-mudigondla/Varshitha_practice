#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	int *p;
	p=(int *)malloc(n*sizeof(int));
	printf("Enter the elements of array:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("Array elements reverse:\n");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
	if(p!=NULL)
	{
		free(p);
		p=NULL;
	}
	return 0;
}

