#include<stdio.h>
int min(int a,int b)
{
	int diff,k;
	diff=a-b;
	k=(diff>>31)&1;
	printf("Difference is:%d\n",diff);
	return (a*k)+b*(1-k);
}
int main()
{
	int a,b;
	printf("Enter a and b values:\n");
	scanf("%d%d",&a,&b);
	int res=min(a,b);
	printf("Minimum value is:%d\n",res);
	return 0;
}

