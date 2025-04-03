#include<stdio.h>
#include<string.h>
int main()
{
	int num,j;
	char str[50][50],temp[50];
	printf("Enter the number of strings:\n");
	scanf("%d",&num);
	printf("Enter the string array:\n");
	for(int i=0;i<=num;i++)
		fgets(str[i],sizeof(str[i]),stdin);
	for(int i=1;i<=num;i++)
	{
		for(j=0;j<=num-i;j++)
		{
			if(strcmp(str[j],str[j+1])>0)
			{
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		}
	}
	printf("The strings after sorting:\n");
	for(int i=0;i<=num;i++)
	{
		fputs(str[i],stdout);
	}
	return 0;
}

