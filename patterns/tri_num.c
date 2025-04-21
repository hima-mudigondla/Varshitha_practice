#include<stdio.h>
int  main()
{
        int n,f=1;
        printf("Enter the number:\n");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
		f=1;
                for(int j=n-i;j>0;j--)
                        printf("  ");
                for(int k=1;k<(2*i);k++)
		{
			if(k<=i)
                        	printf("%d ",k);
			else{
				printf("%d ",k-(f*2));
				f++;}
		}
                printf("\n");

        }
        printf("\n");
        return 0;
}
