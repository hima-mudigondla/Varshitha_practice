#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],substr[15];
	int i,j,found=0;
	printf("Enter the string:\n");
	fgets(str,50,stdin);
	str[strcspn(str,"\n")]='\0';	
	printf("Enter the substring to check:\n");
	fgets(substr,15,stdin);
	substr[strcspn(substr,"\n")]='\0';
	for(i=0;str[i]!='\0';i++)
	{
		j=0;
		while(str[i+j]==substr[j] && substr[j]!='\0')
			j++;
		if(substr[j]=='\0')
		{
			found=1;
			break;
		}
	}
	if(found)
		printf("Sub string is found!!\n");
	else
		printf("Sub string is not found!!\n");
	return 0;
}	
