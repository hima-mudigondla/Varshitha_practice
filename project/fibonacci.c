#include<stdio.h>
void fibonacci(int a)
{
	int past=0,pres=1,result;
	printf("%d %d ",past,pres);
	for(int i=2;i<a;i++)
	{
		result=past+pres;
		past=pres;
		pres=result;
		printf("%d ",result);
	}
	printf("\n");
}

