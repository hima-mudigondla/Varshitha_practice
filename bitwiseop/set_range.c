#include<stdio.h>
int main()
{
    int n,left,right;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Enter the right anf left values:\n");
    scanf("%d%d",&right,&left);
    n|=((0xFFFFFFFF>>(32-right)-1)&(0xFFFFFFFF<<left));
    printf("Result:%d\n",n);
    return 0;
}

