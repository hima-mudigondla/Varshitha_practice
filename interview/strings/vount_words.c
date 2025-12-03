#include<stdio.h>
void count_words(char *str)
{
    int i=0,count=1;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            count++;
        }
        i++;
    }
    printf("Number of words in a sentence:%d\n",count);
}
int main()
{
    char str[50];
    printf("Enter the string:\n");
    scanf("%[^\n]",str);
    getchar();
    count_words(str);
    return 0;
}
