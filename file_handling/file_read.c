#include<stdio.h>
int main()
{
	FILE *fptr;
	char data[50];
	fptr=fopen("test.txt","r");
	if(fptr==NULL)
	{
		printf("File caoont be opened!\n");
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
