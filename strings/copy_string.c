#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	int i;
	printf("Enter a string:\n");
	fgets(str1,50,stdin);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	printf("Copied string:\n");
	str2[i]='\0';
	fputs(str2,stdout);
	return 0;
}


