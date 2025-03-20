#include<stdio.h>
int main()
{
	unsigned long int num,digit,rev=0,num1;
	printf("Enter the number:\n");
	scanf("%ld",&num);
	printf("%ld\n",sizeof(num));
	num1=num;
	while(num1>0)
	{
		digit=num1%10;
		rev=rev*10+digit;
		num1/=10;
	}
	printf("Obtained reversed number:%ld\n",rev);
	if(rev==num)
		printf("Given number is a Palindrome\n");
	else
		printf("Given number is not  a Palindrome\n");
	return 0;
}

