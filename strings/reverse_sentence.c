#include<stdio.h>
#include<string.h>
void strrev(char *p,int start,int end)
{
    char t; 
    for(;start<=end;start++,end--)
    {
        t=p[start];
        p[start]=p[end];
        p[end]=t;
    }
}
int main()
{
    char str[50];
    printf("Enter the string:\n");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    strrev(str,0,strlen(str)-1);
    printf("The reversed string: %s\n",str);
    for(int i=0;str[i]!='\0';)
    {
        int j;
        for(j=i;str[j]!='\0'&&str[j]!=' ';j++);
        strrev(str,i,j-1);
        i=j+1;
    }
    printf("The reversed string:%s\n",str);
    return 0;
}
