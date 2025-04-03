#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("Enter the string:\n");
	scanf("%[^\n]",str);
	printf("Reversed string is:\n");
	for(int i=strlen(str);i>=0;i--)
		printf("%c",str[i]);
	printf("\n");
	return 0;
}
