#include<stdio.h>
struct ex
{
    int a;
    char b[9];
};
int main()
{
    int temp=0;
    union ex var={0x11223344};
    for(int i=0,j=3;i<j;i++,j--)
    {
        temp=var.b[i];
        var.b[i]=var.b[j];
        var.b[j]=temp;
    }
    for(int i=0;i<4;i++)
    {
        printf("%x\n",var.b[i]);
    }
    printf("%x\t",var.a);
    return 0;
}

