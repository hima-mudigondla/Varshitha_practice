#include<stdio.h>
int main()
{
	char str[50];
	int cnt1=0,cnt2=0;
	printf("Enter a string:\n");
	fgets(str,50,stdin);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			cnt1++;
		else if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
			cnt2++;
	}
	printf("Number of vowels in string:%d\n",cnt1);
	printf("Number of consonants in string:%d\n",cnt2);
	return 0;
}


