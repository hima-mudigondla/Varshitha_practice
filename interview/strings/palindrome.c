#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
    char temp;
    for(int i=0,j=strlen(str)-1;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("Reversed string:%s\n",str);
}
int main()
{
    int i,palindrome=0;
    char str[20];
    char org_str[20];
    printf("Enter a string:\n");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        org_str[i]=str[i];
    }
    org_str[i]='\0';
    reverse(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(org_str[i]==str[i])
        {
            palindrome=1;
            break;
        }
    }
    if(palindrome==0)
    {
        printf("Given string is not a palindrome!\n");
    }
    else
    {
        printf("Given string is palindrome!\n");
    }
    return 0;
}
