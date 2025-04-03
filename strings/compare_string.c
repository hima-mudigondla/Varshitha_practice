#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	int count=0;
	printf("Enter the two strings:\n");
	fgets(str1,50,stdin);
	fgets(str2,50,stdin);
	if(strlen(str1)==strlen(str2))
	{
		for(int i=0;str1[i]!='\0',str2[i]!='\0';i++)
		{
			if(str1[i]==str2[i])
				count++;
		}
	}
	if(count==strlen(str1))
			printf("Strings are equal!\n");
	else
		printf("strings are not equal!\n");
	return 0;
}



