#include <stdio.h>

int main() {
   char bit;
   int num=0;
   printf("Enter number less than or equal to 32 bits:");
   for(int i=0;i<=31;i++)
   {
       bit=getchar();
       if(bit=='0')
       {
           num=num<<1;
       }
       else if(bit=='1')
       {
           num=(num<<1)+1;
       }
       else 
            break;
   }
   printf("Hexadecimal:%x\n",num);
   printf("Decimal:%d\n",num);

    return 0;
}
