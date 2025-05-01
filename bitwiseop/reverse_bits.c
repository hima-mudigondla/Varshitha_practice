#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	for(int i=0,j=7;i<j;i++,j--)
	{
		if(!(n&(1<<i)) != !(n&(1<<j)))
			n^=((1<<i)|(1<<j));
	}
	printf("Reverse of bits:%d\n",n);
	return 0;
}



