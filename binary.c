#include<stdio.h>
int main()
{
	int num,base=1,res=0,rem;
	printf("Enter the number:\n");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%2;
		res+=base*rem;
		base*=10;
		num/=2;
	}
	printf("The result in binary:%d\n",res);
	return 0;
}



