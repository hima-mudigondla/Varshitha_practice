#include<stdio.h>
int main()
{
	int num,base=1,rem,res=0,one=0;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%2;
		res+=base*rem;
		base*=10;
		num/=2;
	}
	printf("Given number in binary:%d\n",res);
	while(res>0)
	{
		rem=res%10;
		if(rem==1)
		{
			one++;
		}
		res/=10;
	}
	printf("Number of set bits in number is:%d\n",one);
	return 0;
}

