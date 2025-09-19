#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int freq[256]={0};
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        freq[(unsigned char)str[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0&&i!='\n')
        {
            printf("%c:%d\n",i,freq[i]);
        }
    }
    return 0;
}
