#include<stdio.h>
int main()
{
	FILE *fptr;
	char data[50]="Hello World";
	fptr=fopen("/home/hima_varshitha/test1.c","w");
	if(fptr==NULL)
	{
		printf("File cannot be opened!\n");
	}
	else
	{
		printf("File opened!\n");
		fputs(data,fptr);
		fputs("\n",fptr);
		fclose(fptr);
	}
	return 0;
}
