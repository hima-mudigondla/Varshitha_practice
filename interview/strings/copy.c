#include<stdio.h>
#include<string.h>
void copy(char *str1,char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        str1[i]=str[i];
        i++;
    }
        str1[i]='\0';
}
int main()
{
    char str1[20],str[20];
    printf("Enter the string:\n");
    scanf("%[^\n]",str);
    getchar();
    copy(str1,str);
    printf("Copied string:%s\n",str1);
    return 0;
}
