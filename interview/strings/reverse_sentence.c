#include<stdio.h>
#include<string.h>
void reverse(char *str,int i,int j)
{
    char temp;
    for(;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}
int main()
{
    char str[20];
    printf("Enter a string:\n");
    scanf("%[^\n]",str);
    reverse(str,0,strlen(str)-1); //if we skip this the op will be "elloh dlrow"
    for(int i=0;str[i]!='\0';)
    {
        int j;
        for(j=i;str[j]!='\0'&&str[j]!=' ';j++);
        reverse(str,i,j-1);
        i=j+1;
    }
    printf("Reversed string:%s\n",str);
    return 0;
}
