#include<stdio.h>
int my_length(char *str)
{
    int i=0;
    while(str[i]!='\0')
    i++;
    return i;
}
int main()
{
    char str[20];
    printf("Enter the string:\n");
    scanf("%[^\n]",str);
    int res=my_length(str);
    printf("Length of the string:%d\n",res);
    return 0;
}
