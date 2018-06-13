#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdlib.h>

struct msgbuf{
	long mtype;
	char data[50];
};

int main(void)
{
	struct msgbuf v;
	int id;
_
	
	id = msgget(3, IPC_CREAT | 0666);
	perror("msgget");
	if(id < 0) {
		printf("msgget failed\n");
		exit(EXIT_FAILURE);
	}

	//id = msgget(3, IPC_CREAT | 0666);
	v.mtype = 200;
	strcpy(v.data, "victoty");
//	while(1) {
		msgsnd(id, &v, sizeof(v.data), 0);
		perror("msgsnd");
		v.mtype = 300;
		msgrcv(id, &v, sizeof(v.data),300, 0);
		printf("%s\n", v.data);
//	}
	
	return 0;
}	
	
:wq

