#include<stdio.h>
#include<string.h>
void compare(char *str,char *str1)
{
    int count=0;
    if(strlen(str)==strlen(str1))
    {
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]==str1[i])
            {
                count++;
            }
        }
    }
    if(strlen(str)==count)
    {
        printf("Strings are equal!");
    }
    else
    {
        printf("Strings are not equal!");
    }
}
int main()
{
    char str[20],str1[20];
    printf("Enter string1:\n");
    scanf("%[^\n]",str);
    getchar();
    printf("Enter string2:\n");
    scanf("%[^\n]",str1);
    compare(str,str1);
    return 0;
}
