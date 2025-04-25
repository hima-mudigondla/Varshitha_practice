#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],*p;
	p=str;
	printf("Enter the string:\n");
	scanf("%[^\n]",p);
	str[strcspn(str,"\n")]='\0';
	printf("Reversed string:\n");
	for(int i=strlen(str);i>=0;i--)
	{
		printf("%c",*(p+i));
	}
	printf("\n");
	return 0;
}

