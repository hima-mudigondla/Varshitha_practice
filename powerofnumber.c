#include <stdio.h>
int main()
{
        int base=0,exp=0,pow=1;
        printf("enter the base and exp:\n");
        scanf("%d%d",&base,&exp);
	if(exp<0)
	{
        while(exp<0)
        {
                exp++;
                pow*=base;
        }
        printf("The value is:%lf\n",(double)1/pow);
	}
	else
	{
        for(int i=0;i<exp;i++)
        {
                pow*=base;
        }
        printf("The value is:%lf\n",(double)pow);
        return 0;
	}
}
