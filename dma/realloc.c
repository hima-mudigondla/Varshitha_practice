#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,*p;
	printf("Enter the size:\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("Enter the values:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("Values before reallocation:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
	printf("Enter the size to extend:\n");
	scanf("%d",&m);
	p=(int *)realloc(p,m*sizeof(int));
	printf("Enter the values for extension:\n");
	for(int i=n;i<m;i++)
	{
		scanf("%d",p+i);
	}
	printf("Values after reallocation:\n");
	for(int i=0;i<m;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
	if(p!=NULL)
		free(p);
	return 0;
}
