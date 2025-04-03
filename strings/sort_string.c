#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	char temp='\0';
	printf("Enter the string:\n");
	fgets(str,50,stdin);
	for(int i=0;i<strlen(str);i++)
	{
		for(int j=i+1;j<strlen(str);j++)
		{
			if(str[i]>str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	printf("The string after sorting:\n");
	fputs(str,stdout);
	printf("\n");
	return 0;
}



