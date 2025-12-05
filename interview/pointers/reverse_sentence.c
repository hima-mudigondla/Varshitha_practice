#include<stdio.h>
void reverse(char *str,int start,int end)
{
    char temp;
    for(;start<end;start++,end--)
    {
        temp=*(str+start);
        *(str+start)=*(str+end);
        *(str+end)=temp;
    }
}
int main()
{
    char str[]="Embedded linux is great learning";
    char *p;
    p=str;
    for(int i=0;*(p+i)!='\0';)
    {
        int j;
        for(j=i;*(p+j)!='\0'&& *(p+j)!=' ';j++);
        reverse(p,i,j-1);
        i=j+1;
    }
    printf("Reversed string:\n");
    for(int i=0;*(p+i)!='\0';i++)
    {
    	printf("%c",*(p+i));
    }
    printf("\n");
    return 0;
}
