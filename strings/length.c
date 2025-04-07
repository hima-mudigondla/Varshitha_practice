#include<stdio.h>
#include<stdlib.h>
int length(char str[]);
int length(char str[])
{
	int count=0;
	for(int i=0;str[i]!='\0';i++)
        {
                if(str[i]!=' ')
                        count++;
        }
	return count;
}
int main()
{
	char str[50];
	printf("Enter a string:\n");
	scanf("%[^\n]",str);
	/*for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
			count++;
	}*/
	int count=length(str);
	printf("Number of characters in a string:%d\n",count);
	return 0;
}


