#include<stdio.h>
int main()
{
	FILE *fptr;
	char data[50]="Welcome to the CLanguage";
	fptr=fopen("test.txt","w");
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
