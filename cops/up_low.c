#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character:\n");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
		printf("%c is lower case alphabet\n",ch);
	else if(ch>='A' && ch<='Z')
		printf("%c is upper case alphabet\n",ch);
	else 
		printf("Invalid input\n");
	return 0;
}

