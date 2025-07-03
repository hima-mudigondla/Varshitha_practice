#include<stdio.h>
int main()
{
	FILE *fptr;
	char data[50]="Hello world";
	fptr=fopen("/home/hima_varshitha/text.txt","w");
	if(fptr==NULL)
	{
		printf("File not opened!\n");
	}
	else
	{
		printf("File opened successfullly!\n");
		fputs(data,fptr);
		fputs("\n",fptr);
		fseek(fptr,6,SEEK_END);
		fputs("Hima Varshitha",fptr);
		fputs("\n",fptr);
		fclose(fptr);
	}
	return 0;
}
