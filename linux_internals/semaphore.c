#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	int semid;
	key_t key=1234;
	semid=semget(key,1,0666|IPC_CREAT);
	if(semid<0)
	{
		perror("semget");
		exit(1);
	}
	if(semctl(semid,0,SETVAL,1)<0)
	{
		perror("semctl");
		exit(1);
	}
	struct sembuf P={0,-1,0};
	struct sembuf V={0,+1,0};
	printf("Parent is waiting!\n");
	semop(semid,&P,1);
	printf("Parent is in critical section!\n");
	sleep(2);
	if(fork()==0)
	{
		printf("Child is waiting!\n");
		semop(semid,&P,1);
		printf("Child is in critical section!\n");
		sleep(2);
		printf("Child is released!\n");
		semop(semid,&V,1);
		exit(0);
	}
	printf("Parent is released!\n");
	semop(semid,&V,1);
	exit(3);
	semctl(semid,0,IPC_RMID);
	return 0;
}
