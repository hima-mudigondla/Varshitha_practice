#include<stdio.h>
void concat(char *str,char *str1)
{
    int i;
    for(i=0;str[i]!='\0';i++);
    int j=0;
    while(str1[j]!='\0')
    {
        str[i]=str1[j];
        i++;
        j++;
    }
    str[i]='\0';
}
int main()
{
    char str[20],str1[20];
    printf("Enter the string1:\n");
    scanf("%[^\n]",str);
    getchar();
    printf("Enter string2:\n");
    scanf("%[^\n]",str1);
    getchar();
    concat(str,str1);
    printf("String after concatenation:%s\n",str);
    return 0;
}
