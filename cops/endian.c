#include<stdio.h>
int main()
{
	int num,res;
	printf("Enter the number:\n");
	scanf("%d",&num);
	res=num&0xFF;
	if(res==0)
		printf("The system is big endian\n");
	else
		printf("The system is little endian\n");
	return 0;
}
