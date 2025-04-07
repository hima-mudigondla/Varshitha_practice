#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int num;
	char str[50]="Hello world",str1[50]="Hello hi",str2[50],atoi_str[5]="123";
	num=atoi(atoi_str);
	printf("ASCII to integer:%d\n",num);
//	printf("String Concatenation:%s \n",strcat(str,str1));
	printf("Character Searching:%s\n",strchr(str,'o'));
	printf("String comparision:%d\n",strcmp(str,str1));
//	printf("String Copy:%s\n",strcpy(str2,str));
	printf("Length of a string:%ld\n",strlen(str));
//	printf("String Concatenation with limit:%s\n",strncat(str,str1,5));
	printf("String Compare with limit:%d\n",strncmp(str,str1,7));
	printf("String copy with limit:%s\n",strncpy(str2,str,5));
	printf("Find substring:%s\n",strstr(str,"o"));
	return 0;
}



