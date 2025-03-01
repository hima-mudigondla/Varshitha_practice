#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
			printf(" ");
		for(int k=n;k>=i;k--)
			printf("* ");
		printf("\n");
	}
	for(int i=2;i<=n;i++)
        {
                for(int j=n-i;j>0;j--)
                        printf(" ");
                for(int k=1;k<=i;k++)
                        printf("* ");
                printf("\n");

        }
	return 0;
}
