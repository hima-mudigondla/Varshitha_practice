#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include"msg_def.h"
int main()
{
	struct msgbuf snd_msg;
	struct msgbuf rcv_msg;
	int pid,msg;
	printf("Creating message queue!\n");
	msg=msgget(KEY,IPC_CREAT|0666);
	if(msg==-1)
	{
		perror("msgget failed");
		exit(1);
	}
	pid=fork();
	if(pid<0)
	{
		perror("Fork failed");
		exit(1);
	}
	if(pid>0)
	{
		printf("Parent is writing in message queue!\n");
		snd_msg.mtype=1;
		strcpy(snd_msg.mtext,"hello");
		if((msgsnd(msg,&snd_msg,sizeof(snd_msg.mtext),0))==-1)
		{
			perror("msgsnd failed");
			exit(1);
		}
	}
	else
	{
		printf("Child is reading message queue:\n");
		if((msgrcv(msg,&rcv_msg,sizeof(rcv_msg.mtext),1,0))==-1)
		{
			perror("msgrcv failed");
			exit(1);
		}
		else
		{
			printf("Data read is:%s\n",rcv_msg.mtext);
		}
	}
	return 0;
}

		

