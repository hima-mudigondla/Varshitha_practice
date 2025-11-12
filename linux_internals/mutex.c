#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
int counter=0;
pthread_mutex_t lock;
void *increment(void *arg)
{
	char *thread_name=(char *)arg;
	for(int i=0;i<=20;i++)
	{
		pthread_mutex_lock(&lock);
		counter++;
		printf("%s increment counter value:%d\n",thread_name,counter);
		pthread_mutex_unlock(&lock);
		sleep(2);
	}
	return NULL;
}
int main()
{
	pthread_t t1,t2;
	pthread_mutex_init(&lock,NULL);
	pthread_create(&t1,NULL,increment,"t1");
	pthread_create(&t2,NULL,increment,"t2");
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	pthread_mutex_destroy(&lock);
	return 0;
}

