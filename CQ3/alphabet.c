#include<stdio.h>
int main()
{
	char x,y;
	printf("Lower case alphabets:\n");
	for(x='a';x<='z';x++)
		printf("%c ",x);
	printf("\n");
	printf("Upper case alphabets:\n");
	for(y='A';y<='Z';y++)
		printf("%c ",y);
	return 0;
}

