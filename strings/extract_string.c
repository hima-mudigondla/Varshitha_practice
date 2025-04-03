#include<stdio.h>
int main()
{
	char str[50];
	int pos,num;
	printf("Enter the string:\n"); 
	fgets(str,50,stdin);
	printf("Enter the start position to extract:\n");
	scanf("%d",&pos);
	printf("Enter no.of characters to be extracted from %d position:\n",pos);
	scanf("%d",&num);
	printf("The extracted substring:\n");
	for(int i=pos;i<(pos+num);i++)
	{
		fputc(str[i],stdout);
	}
	printf("\n");
	return 0;
}


