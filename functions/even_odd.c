#include<stdio.h>
int even_odd(int);
int even_odd(int num)
{
	if(num%2==0)
		printf("Number is even\n");
	else
		printf("Number is odd\n");
	return 0;
}
int main()
{
	int x;
	printf("Enter the value of x:\n");
	scanf("%d",&x);
	even_odd(x);
	return 0;
}


