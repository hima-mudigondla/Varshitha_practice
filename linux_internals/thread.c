#include<stdio.h>
#include<pthread.h>
int a=10;
void *printMessage(void *arg)
{
	int b=20;
	char *message=(char *)arg;
	printf("Thread says:%s\n",message);
	printf("a value:%d\n",a);
	printf("b value:%d\n",b);
	return NULL;
}
int main()
{
	int b=30;
	pthread_t thread;
	char msg[]="Hello from threads!";
	if(pthread_create(&thread,NULL,printMessage,msg)!=0)
	{
		perror("pthread_create");
		return 1;
	}
	printf("a value:%d\n",a);
        printf("b value:%d\n",b);
	pthread_join(thread,NULL);
	printf("thread finished!\n");
	return 0;
}
