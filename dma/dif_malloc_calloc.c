#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,*arr,*arr1;
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	arr=(int *)malloc(num*sizeof(int));
	arr1=(int *)calloc(num,sizeof(int));
	printf("Elements of first array using malloc:\n");
	for(int i=0;i<num;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
	printf("Elements of second array using calloc:\n");
	for(int i=0;i<num;i++)
	{
		printf("%d ",*(arr1+i));
	}
	printf("\n");
	if((arr!=NULL)&&(arr1!=NULL))
	{
		free(arr);
		free(arr1);
	}
	return 0;
}
