#include<stdio.h>
void concat(char *str,char *str1)
{
    int i,j;
    for(i=0;*(str+i)!='\0';i++);
    for(j=0;*(str1+j)!='\0';)
    {
        *(str+i)=*(str1+j);
        i++;
        j++;
    }
    *(str+i)='\0';
}
int main()
{
    char str1[50],str2[50];
    char *p,*q;
    p=str1;
    q=str2;
    printf("Enter the string1:\n");
    scanf("%[^\n]",p);
    getchar();
    printf("Enter the string2:\n");
    scanf("%[^\n]",q);
    getchar();
    concat(p,q);
    printf("Concatenated string:%s\n",p);
    return 0;
}
