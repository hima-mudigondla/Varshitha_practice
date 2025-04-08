#include<stdio.h>
#include<string.h>
struct string
{
	char str[50];
};
int main()
{
	struct string s;
	printf("Enter the string:\n");
	fgets(s.str,50,stdin);
	s.str[strcspn(s.str,"\n")]='\0';
	printf("The string entered:\n");
	fputs(s.str,stdout);
	printf("\n");
	return 0;
}
