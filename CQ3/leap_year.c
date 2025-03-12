#include<stdio.h>
int main()
{
	int yr,yr1;
	printf("Enter the start year and end year:\n");
	scanf("%d%d",&yr,&yr1);
	printf("Leap years from %d to %d:\n",yr,yr1);
	for(int i=yr;i<=yr1;i++)
	{
		if(i>0 && i%4==0 && i%100!=0 ||  i%400==0)
			printf("%d ",i);

	}
    	printf("\n");
	return 0;
}

