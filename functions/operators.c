#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
float div(float,int);
int add(int a,int b)
{
	return (a+b);
}
int sub(int a,int b)
{
	return (a-b);
}
int mul(int a,int b)
{
	return (a*b);
}
float div(float a,int b)
{
	return (a/b);
}
int main()
{
	int x,y;
	printf("Enter the value of x and y:\n");
	scanf("%d%d",&x,&y);
	printf("Addition is:%d\n",add(x,y));
	printf("Subtraction is:%d\n",sub(x,y));
	printf("Multiplication is:%d\n",mul(x,y));
	printf("Division is:%f\n",div((float)x,y));
	return 0;
}


