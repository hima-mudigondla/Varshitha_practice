#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,*arr;
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	arr=(int *)malloc(num*sizeof(int));
	printf("Enter the elements:\n");
	for(int i=0;i<num;i++)
	{
		scanf("%d",(arr+i));
	}
	for(int i=0;i<num;i++)
	{
		if(*arr < *(arr+i+1))
		{
			*arr=*(arr+i);
		}
	}
	printf("Largest element in array is:%d\n",*arr);
	if(arr!=NULL)
	{
		free(arr);
		arr=NULL;
	}
	return 0;
}


