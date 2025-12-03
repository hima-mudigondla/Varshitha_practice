#include<stdio.h>
void vow_cons(char *str)
{
    int i=0,vow=0,cons=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vow++;
        }
        else
        {
            cons++;
        }
        i++;
    }
    printf("Number of vowels:%d\n",vow);
    printf("Number of consonants:%d\n",cons);
}
int main()
{
    char str[20];
    printf("Enter the string:\n");
    scanf("%[^\n]",str);
    getchar();
    vow_cons(str);
    return 0;
}
