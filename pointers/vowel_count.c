#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],*p;
	int cnt=0,cnt1=0;
	printf("Enter the string:\n");
	scanf("%[^\n]",str);
	//str[strcspn(str,"\n")]='\0';
	p=str;
	for(int i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)!=' ')
		{	
		if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')
			cnt++;
		else
			cnt1++;
		}
	}
	printf("Number of vowels in a string:%d\n",cnt);
	printf("Number of consonants in a string:%d\n",cnt1);
	return 0;
}
