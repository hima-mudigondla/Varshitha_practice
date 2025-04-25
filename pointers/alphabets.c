#include<stdio.h>
int main()
{
	char ch,*p;
	p=&ch;
	printf("Alphabets:\n");
	for(int i=0;i<26;i++)
	{
		*p='A'+i;
		printf("%c ",*p);
	}
	printf("\n");
	return 0;
}
