#include <stdio.h>

extern int a;
void test()
{
   int a;
   printf("%d\n",a);
}

int main() {
    int a=5;
    test();


    return 0;
}
