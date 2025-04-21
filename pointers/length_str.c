#include<stdio.h>
int main()
{
	char str[50],*p,count=0;
	printf("Enter the string:\n");
	scanf("%[^\n]",str);
	p=&str;
	for(int i=0;*p!='\0';i++)
	{
		count++;
	}
	printf("Length of a string:%d\n
