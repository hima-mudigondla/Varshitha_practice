#include<stdio.h>
void copy(char *str,char *str1)
{
    int i;
    for(i=0;*(str+i)!='\0';i++)
    {
        *(str1+i)=*(str+i);
    }
    str1[i]='\0';
}
int main()
{
    char str[30],str1[30];
    char *p,*q;
    p=str;
    q=str1;
    printf("Enter the string:\n");
    scanf("%[^\n]",p);
    copy(p,q);
    printf("Copied string:%s\n",q);
    return 0;
}
