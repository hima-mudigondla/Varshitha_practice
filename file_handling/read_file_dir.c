#include<stdio.h>
int main()
{
	FILE *fptr;
	char data[50];
	fptr=fopen("/home/hima_varshitha/test.c","r");
	if(fptr==NULL)
	{
		printf("File not opened!\n");
	}
	else
	{
		while(fgets(data,50,fptr)!=NULL)
		{
			printf("%s",data);
		}
		fclose(fptr);
	}
	return 0;
}
