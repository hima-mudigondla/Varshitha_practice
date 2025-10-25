#include<stdio.h>
int main()
{
	char filename[256],ch;
	int characters=0,lines=0,words=1;
	printf("Enter the filename:\n");
	scanf("%s",filename);
	FILE *fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("File cannot be opened!\n");
		return 1;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch!='\n'&&ch!='\0')
		{
			characters++;
		}
		if(ch=='\n')
		{
			lines++;
		}
		if(ch==' ')
		{
			words++;
		} 
	}
	printf("Number of characters:%d\n",characters);
	printf("Number of words:%d\n",words);
	printf("Number of lines:%d\n",lines);
	fclose(fp);
	return 0;
}


