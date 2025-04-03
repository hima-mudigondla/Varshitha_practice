#include<stdio.h>
int main()
{
	char str[50];
	int count=1;
	printf("Enter a string:\n");
	fgets(str,50,stdin);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
			count++;
	}
	printf("Number of words in a string:%d\n",count);
	return 0;
}

