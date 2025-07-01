#include<stdio.h>
#include<stdlib.h>
void no_main()
{
	int a,b;
	printf("Enter values:\n");
	scanf("%d%d",&a,&b);
	printf("%d\n",a+b);
    printf("Hello world!!\n");
}   
void _start()
{
    no_main();
    exit(1);
}
