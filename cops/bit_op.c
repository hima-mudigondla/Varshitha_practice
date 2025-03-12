#include<stdio.h>
int main()
{
	int a,b,and,or,xor;
	printf("Enter the values of a and b:\n");
	scanf("%d%d",&a,&b);
	and=a&b;
	or=a|b;
	xor=a^b;
	printf("AND of a and b:%d\n",and);
	printf("OR of a and b:%d\n",or);
	printf("XOR of a and b:%d\n",xor);
	return 0;
}

