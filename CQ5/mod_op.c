#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value of a:");
	scanf("%d",&a);
	if(a%2==0)
		printf("Number is even\n");
	else 
		printf("Number is odd\n");
	return 0;
}
