#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/sem.h>
#include<sys/shm.h>
#include<unistd.h>
#include<string.h>
#define SHM_SIZE 100
int main()
{
	key_t key=1234;
	int shmid,semid;
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
		printf("Child read:%s\n",msg);
		exit(0);
	}
	strcpy(msg,"Hello from parent!");
	printf("Parent wrote the message!\n");
	semop(semid,&V,1);
	sleep(1);
	shmdt(msg);
	shmctl(shmid,IPC_RMID,NULL);
	semctl(semid,0,IPC_RMID);
	return 0;
}

