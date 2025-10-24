#ifndef MSG_DEF_H
#define MSG_DEF_H
#include<sys/types.h>
#define KEY 1234
struct msgbuf{
	long mtype;
	char mtext[100];
};
#endif
