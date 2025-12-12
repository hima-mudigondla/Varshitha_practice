#include<stdio.h>
int main()
{
    char str[30],str1[30];
    int freq[256]={0};
    int freq1[256]={0};
    printf("Enter string1:\n");
    scanf("%[^\n]",str);
    getchar();
    printf("Enter string2:\n");
    scanf("%[^\n]",str1);
    getchar();
    for(int i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }
    for(int i=0;str1[i]!='\0';i++)
    {
        freq1[str1[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=freq1[i])
        {
            printf("Strings are not anagram\n");
            return 0;
        }
    }
    printf("Strings are anagrams\n");
    return 0;
}

