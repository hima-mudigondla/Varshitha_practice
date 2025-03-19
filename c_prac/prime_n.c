#include<stdio.h>
#include<math.h>
int main()
{
	int ran,count;
	printf("Enter the range:\n");
	scanf("%d",&ran);
	printf("Prime numbers from 1 to %d:\n",ran);
	for(int i=2;i<=ran;i++)
	{
		count=0;
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
                {
                        printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}

      

