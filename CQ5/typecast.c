#include<stdio.h>
int main()
{
	float x;
	printf("Enter the value of x:\n");
	scanf("%f",&x);
	int y=(int)x;
	printf("value after type casting to int:%d\n",y);
	printf("Original value:%f\n",x);
	return 0;
}


