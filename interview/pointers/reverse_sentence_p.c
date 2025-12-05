#include<stdio.h>
void rev(char *l,char *r)
{
    char temp;
    while(l<r)
    {
        temp=*l;
        *l=*r;
        *r=temp;
    	l++;
    	r--;
    }
}
int main()
{
    char str[]="hello world";
    char *p=str;
    char *l,*r;
    while(*p)
    {
        l=p;
        while(*p!=' '&& *p!='\0'&& *p!='\n')
        {
            p++;
        }
        r=p-1;
        rev(l,r);
        if(*p==' ')
        {
            p++;
        }
    }
    printf("%s",str);
    printf("\n");
}
