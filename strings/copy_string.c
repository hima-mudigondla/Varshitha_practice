#include<stdio.h>
#include<string.h>
void copy_string(char str1[],char str[]);
void copy_string(char str1[],char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		str1[i]=str[i];
	}
        str1[i]='\0';
}
	
int main()
{
	char str[50],str1[50];
	int i;
	printf("Enter a string:\n");
	fgets(str,50,stdin);
	str[strcspn(str, "\n")] = '\0';
	copy_string(str1,str);
	printf("Copied string:\n");
	fputs(str1,stdout);
	printf("\n");
	return 0;
}


