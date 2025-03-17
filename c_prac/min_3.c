#include<stdio.h>
#define MIN ((a<b)&&(a<c))?a:(b<c)?b:c
int main()
{
	int a,b,c;
	printf("Enter the values of a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("The minimum of 3 values is:%d\n",MIN);
	return 0;
}
	
