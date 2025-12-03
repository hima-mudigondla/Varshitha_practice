#include<stdio.h>
int my_atoi(char *str)
{
    int i=0,sign=1,result=0;
    while(str[i]==' '||str[i]=='\n'||str[i]=='\t')
    {
        i++;
    }
    while(str[i]=='+'||str[i]=='-')
    {
        if(str[i]=='-')
        {
            sign=-1;
        }
        i++;
    }
    while(str[i]>='0'&&str[i]<='9')
    {
        result=result*10+(str[i]-'0');
        i++;
    }
    return (int)(result*sign);
}
int main()
{
    char str[20];
    printf("Enter a string:\n");
    scanf("%s",str);
    int res=my_atoi(str);
    printf("String after atoi function:%d\n",res);
    return 0;
}
