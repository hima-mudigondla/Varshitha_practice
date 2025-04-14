#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*p,i;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++)
	{
		if(*p<*(p+i))
		{
			*p=*(p+i);
		}
	}
	printf("Largest element is:%d\n",*p);
	if(p!=NULL)
	{
		free(p);
		p=NULL;
	}
	return 0;
}


