#include<stdio.h>
#include<string.h>
void compare(char *str,char *str1,int *count)
{
    if(strlen(str)==strlen(str1))
    {
        for(int i=0;*(str+i)!='\0';i++)
        {
            if(*(str+i)==*(str1+i))
            {
                (*count)++;
            }
        }
    }
}
int main()
{
    int count=0;
    char str[30],str1[30];
    char *p,*q;
    p=str;
    q=str1;
    printf("Enter the string1:\n");
    scanf("%29[^\n]",p);
    getchar();
    printf("Enter the string2:\n");
    scanf("%29[^\n]",q);
    getchar();
    compare(p,q,&count);
    if(count==strlen(p))
    {
        printf("Both strings are equal!\n");
    }
    else
    {
        printf("Both strings are not equal!\n");
    }
    return 0;
}
