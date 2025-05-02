#include<stdio.h>
int main()
{
    int x,num,count=0; 
    printf("Enter the number:\n");
    scanf("%d",&num);
    x=num;
    while(num>0)
    {
        if((num&1)==1)
        {
            count++;
        }
        num=num>>1;
    }
    printf("Number of set bits is:%d\n",count);
    int count1=0;
    while(x>0)
    {
        x=x&(x-1);
        count1++;
    }
    printf("Number of set bits is:%d\n",count1);
    return 0;
}
