#include<stdio.h>
int to_binary(int );
int to_binary(int num)
{
	int base=1,rem,res=0;
	while(num>0)
	{
		rem=num%2;
		res+=base*rem;
		base*=10;
		num/=2;
	}
	printf("Given number in binary:%d\n",res);
	return 0;
}
int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	to_binary(num);
	return 0;
}

