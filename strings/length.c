#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[50];
	int count=0;
	printf("Enter a string:\n");
	scanf("%[^\n]",str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
			count++;
	}
	printf("Number of characters in a string:%d\n",count);
	return 0;
}


