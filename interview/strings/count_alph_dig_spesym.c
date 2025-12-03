#include<stdio.h>
void count_char(char *str)
{
    int alph=0,dig=0,spe_sym=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        {
            alph++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            dig++;
        }
        else
        {
            spe_sym++;
        }
    }
    printf("Number of alphabets:%d\n",alph);
    printf("Number of digits:%d\n",dig);
    printf("Number of special symbols:%d\n",spe_sym);
}
int main()
{
    char str[20];
    printf("Enter the string:\n");
    scanf("%[^\n]",str);
    count_char(str);
    return 0;
}
