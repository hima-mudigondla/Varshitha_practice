#include<stdio.h>
int main()
{
    char str[100],*p;
    p=str;
    printf("Enter the string:\n");
    scanf("%[^\n]",p);
    for(int i=0;*(p+i)!='\0';i++)
    {
        for(int j=i+1;*(p+j)!='\0';j++)
        {
            if(*(p+i)==*(p+j))
            {
                for(int k=j;*(p+k)!='\0';k++)
                {
                    *(p+k)=*(p+k+1);
                }
            }
        }
    }
    printf("String after removing duplicates:%s\n",p);
    return 0;
}
