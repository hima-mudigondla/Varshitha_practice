#include<stdio.h>
void toggle_case(char *str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]+=32;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            str[i]-=32;
        }
    }
}
int main()
{
    char str[20];
    printf("Enter the string:\n");
    scanf("%[^\n]",str);
    getchar();
    toggle_case(str);
    printf("After toggling:%s\n",str);
    return 0;
}
