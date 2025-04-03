#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("Enter a string:\n");
	fgets(str,50,stdin);
	str[strcspn(str,"\n")]='\0';
	printf("String with seperated characters:\n");
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
			printf("%c ",str[i]);
	}
	printf("\n");
	return 0;
}

