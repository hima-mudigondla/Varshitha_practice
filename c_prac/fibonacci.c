#include<stdio.h>
int main()
{
	int num,past=0,pres=1,res;
	printf("Enter the range:\n");
	scanf("%d",&num);
	printf("Fibonacci series:\n");
	printf("%d %d ",past,pres);
	for(int i=2;i<num;i++)
	{
		res=past+pres;
		past=pres;
		pres=res;
		printf("%d ",res);
	}
	printf("\n");
	return 0;
}

