#include<stdio.h>
void sub_str(char *str,char *substr)
{
    int found=0;
    for(int i=0;*(str+i)!='\0';i++)
    {
        int j=0;
        while((*(str+i+j)==*(substr+j))&&*(substr+j)!='\0')
        j++;
        if(*(substr+j)=='\0')
        {
            found=1;
            break;
        }
    }
    if(found)
    {
        printf("Substring is found!\n");
    }
    else
    {
        printf("Substring is not found!\n");
    }
}
int main()
{
    char str[50],substr[20];
    printf("Enter the string:\n");
    scanf("%[^\n]",str);
    getchar();
    printf("Enter the substring:\n");
    scanf("%[^\n]",substr);
    getchar();
    sub_str(str,substr);
    return 0;
}

