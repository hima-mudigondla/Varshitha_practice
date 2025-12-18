#include<stdio.h>
#include<sys/shm.h>
struct data
{
	char record[100];
}*shm_snd,*shm_rcv;
int main()
{
	int shmid;
	if((shmid=shmget(10,sizeof(struct data),IPC_CREAT|0666))==-1)
	{
		perror("Error");
		return 1;
	}
	shm_snd=(struct data*)shmat(shmid,0,0);
	shm_rcv=(struct data*)shmat(shmid,0,0);
	printf("Entering data to shared memory:\n");
	scanf("%[^\n]",shm_snd->record);
	printf("Recieving data from shared memory:\n");
	printf("**%s**\n",shm_rcv->record);
	shmdt(shm_snd);
	shmdt(shm_rcv);
	shmctl(shmid,IPC_RMID,NULL);
	return 0;
}

