#include<stdio.h>
#include<stdlib.h>
#include"header.h"
int main()
{
	int x,y,choice;
	while(1)
	{
		printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLCATION\n4.DIVISION\n5.EVEN ODD\n6.FIBONACCI\n7.PRIME\n8.EXIT\n");
        	printf("Enter the choice:\n");
	        scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the values of x and y:\n");
       				scanf("%d%d",&x,&y);
			      	printf("%d\n",add(x,y));
				break;
			case 2:
				printf("Enter the values of x and y:\n");
       				scanf("%d%d",&x,&y);
				printf("%d\n",sub(x,y));
				break;
			case 3:
				printf("Enter the values of x and y:\n");
       				scanf("%d%d",&x,&y);
				printf("%d\n",mul(x,y));
				break;
			case 4:
				printf("Enter the values of x and y:\n");
       				scanf("%d%d",&x,&y);
				printf("%f\n",division(x,y));
				break;
			case 5:
				printf("Enter the value of x:\n");
        			scanf("%d",&x);
				even_odd(x);
				break;
			case 6:
				printf("Enter the value of x:\n");
       				scanf("%d",&x);
				fibonacci(x);
				break;
			case 7:
				printf("Enter the value of x:\n");
        			scanf("%d",&x);
				prime(x);
				break;
			case 8:
				exit(1);
				break;
			default:
				printf("Enter a valid option!!\n");
		}
	}
	return 0;
}







