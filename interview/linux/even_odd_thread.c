#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *even_num()
{
	for(int i=0;i<100;i++)
	{
		if(i%2==0)
		{
			printf("Even number:%d\n",i);
		}
	}
	sleep(1);
}
void *odd_num()
{
        for(int i=0;i<100;i++)
        {
                if(i%2==1)
                {
                        printf("Odd number:%d\n",i);
                }
        }
	sleep(1);
}
int main()
{
	pthread_t t1,t2;		
       	pthread_create(&t1,NULL,even_num,NULL);
       	pthread_create(&t2,NULL,odd_num,NULL);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	return 0;
}

