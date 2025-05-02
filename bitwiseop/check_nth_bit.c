#include<stdio.h>
int main()
{
    int num,bit; 
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Enter the bit position to check:\n");
    scanf("%d",&bit);
    num=((num>>bit)&1);
    if(num==1)
        printf("%d bit is set bit!\n",bit);
    else
        printf("%d bit is reset bit!\n",bit);

    return 0;
}
