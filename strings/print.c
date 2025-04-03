#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[50];
	printf("Enter the string:\n");
	fgets(str,sizeof str,stdin);
	printf("The entered string is:\n");
	fputs(str,stdout);
	printf("Enter another string:\n");
	scanf("%[^\n]",str);
	printf("Entered string:%s\n",str);
	return 0;
}
