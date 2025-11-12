#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<string.h>
#include<unistd.h>
#include<sys/shm.h>
#include<sys/sem.h>
#define SHM_SIZE 100
int main()
{
	key_t key=1234;
	int semid,shmid;
	char *msg;
	semid=semget(key,1,0666|IPC_CREAT);
	semctl(semid,0,SETVAL,0);
	shmid=shmget(key,SHM_SIZE,0666|IPC_CREAT);
	msg=shmat(shmid,NULL,0);
	struct sembuf P={0,-1,0};
	struct sembuf V={0,+1,0};
	if(fork()==0)
	{
		semop(semid,&P,1);
		printf("Child1 reads msg:%s\n",msg);
		exit(0);
	}
	if(fork()==0)
	{
		semop(semid,&P,1);
		printf("Child2 reads msg:%s\n",msg);
		exit(0);
	}
	strcpy(msg,"Hello from parent!");
	printf("Parent written the msg!\n");
	semop(semid,&V,1);
	semop(semid,&V,1);
	shmdt(msg);
	shmctl(shmid,IPC_RMID,0);
	semctl(semid,0,IPC_RMID);
	return 0;
}	
