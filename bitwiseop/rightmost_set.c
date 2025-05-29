#include<stdio.h>
#include<stdint.h>
int main()
{
    uint32_t num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(int i=0;i<32;i++)
    {
       if((num&(1<<i))>0)
        {
            printf("%d\n",num&(1<<i));//value of the right mostbit
            //num&=(~(1<<i));It resets the rightmost bit
            break;
        }
    }
    //printf("%d",num);
    return 0;
}
