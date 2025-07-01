#include<stdio.h>
float division(int a,int b)
{
	if(b==0)
	{
		printf("Division by zero error!!\n");
		return 0;
	}
	else
	{
		printf("Division:\n");
		return (float)a/b;
	}
}
