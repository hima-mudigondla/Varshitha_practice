#include <stdio.h>
void hi(){
    int num=0;
    static int i=0;
    i++;
    num++;
    printf("num=%d\n",num);
    printf("i=%d\n",i);
    int a;
    for(int i=0;i<=5;i++){
	    a++;
	    printf("a=%d\t",a);
    }
    printf("a=%d\n",a);
    static int b;
    for(int i=0;i<=5;i++){
            b++;
            printf("b=%d\n",b);
    }
}
int main() {
    int d=0,a=0,b=0,c=0;
    ++a;
    c=d++;
    printf("%d\t%d\n",a,c);
    hi();
    hi();
    hi();

    return 0;
}
