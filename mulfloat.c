#include<stdio.h>
void mulfloat(float a,float b);
void mulfloat(float a,float b)
{
	printf("Multiplication:%f\n",a*b);
}
int main()
{
	float a,b;
	printf("Enter the values of a and b:\n");
	scanf("%f%f",&a,&b);
	mulfloat(a,b);
	return 0;
}

