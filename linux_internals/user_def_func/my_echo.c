#include<stdio.h>
int main()
{
	char input[1000];
	printf("Enter text:\n");
	fgets(input,sizeof(input),stdin);
	printf("%s\n",input);
	return 0;
}
