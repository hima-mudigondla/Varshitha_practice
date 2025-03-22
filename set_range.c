#include<stdio.h>
int main()
{
	short int num;
	int right,left,choice=0;
	printf("Enter the choice\n");
	scanf("%d",&choice);
	printf("Enter the number:\n");
	scanf("%hx",&num);
	printf("Enter the range:\n");
	scanf("%d%d",&right,&left);
	switch(choice)
	{
		case 1:
		{
			printf("Including the given bits\n");
			num|=((0xFFFF>>(16-right)-1)&(0xFFFF<<left));
			printf("Obtained result:%hx\n",num);
			break;
		}
		case 2:        
		{  
			printf("Not including the given bits\n");
                        num|=((0xFFFF>>(16-right))&(0xFFFF<<(left+1)));
                        printf("Obtained result:%hx\n",num);
			break;
                }
	}
	return 0;
}

	

