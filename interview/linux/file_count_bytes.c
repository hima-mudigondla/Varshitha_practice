#include<stdio.h>
int main()
{
	FILE *fp;
	int count=0;
	char *filename;
	int ch;
	printf("Enter the filename:\n");
	scanf("%s",filename);
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		perror("Error in opening file!\n");
		return 1;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		count++;
	}
	fclose(fp);
	printf("Number of bytes in given file:%d\n",count);
	return 0;
}


