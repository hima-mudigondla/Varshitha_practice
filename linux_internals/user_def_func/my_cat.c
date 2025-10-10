#include<stdio.h>
int main()
{
	char filename[256];
	printf("Enter the filename:\n");
	scanf("%255s",filename);
	FILE *file=fopen(filename,"r");
	if(file==NULL)
	{
		perror(filename);
		return 1;
	}
	int ch;
	while((ch=fgetc(file))!=EOF)
	{
		putchar(ch);
	}
	fclose(file);
	return 0;
}
