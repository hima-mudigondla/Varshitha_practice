#include<stdio.h>
int main()
{
	int a,b,c;
	int d,e,f;
	float g,h;
	printf("Enter the numbers:");
	scanf("%d %d %d",&a,&b,&c);
	d=a+b+c;
	printf("Addition:%d\n",d);
	e=a-b-c;
	printf("subtraction:%d\n",e);
	f=a*b*c;
	printf("Multiplication:%d\n",f);
	g=(float)a/b;
	printf("Division:%f\n",g);
	h=a%c;
	printf("Remainder:%f\n",h);
	return 0;
}

