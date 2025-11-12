#include<stdio.h>
#include<sys/shm.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
struct data
{
	char record[200];
};
int main()
{
	int shmid;
	struct data *shm_ptr;
	pid_t pid;
	shmid=shmget(10,sizeof(struct data),IPC_CREAT|0666);
	if(shmid==-1)
	{
		perror("shmget failed");
		exit(1);
	}
	shm_ptr=(struct data *)shmat(shmid,NULL,0);
	if(shm_ptr==(void *)-1)
	{
		perror("shmat failed");
		exit(1);
	}
	pid=fork();
	if(pid==-1)
	{
		perror("fork failed");
		exit(1);
	}
	if(pid>0)
	{
		printf("Parent enter the data!\n");
		fgets(shm_ptr->record,sizeof(shm_ptr->record),stdin);
		shm_ptr->record[strcspn(shm_ptr->record,"\n")]='\0';
		wait(NULL); 
        	shmctl(shmid, IPC_RMID, NULL);
	}
	else
	{
		sleep(5);
		printf("Child reads from the record!\n");
		printf("**%s**\n",shm_ptr->record);
	}
	shmdt(shm_ptr);
	shmctl(shmid,IPC_RMID,NULL);
	return 0;
}
