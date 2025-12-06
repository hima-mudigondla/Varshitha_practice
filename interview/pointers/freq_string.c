#include<stdio.h>
int main()
{
	char str[50],*p;
	int freq[256]={0};
	p=str;
	printf("Enter the string:\n");
	scanf("%[^\n]",p);
	for(int i=0;str[i]!='\0';i++)
	{
		freq[*(p+i)]++;
	}
	for(int i=0;i<256;i++)
	{
		if(freq[i]!=0&&i!='\n')
		{
			printf("%c is repeated %d times!\n",i,freq[i]);
		}
	}
	return 0;
}

