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
	
	id = msgget(3, IPC_CREAT | 0666);
	perror("msgget");
	if(id < 0) {
		printf("msgget failed\n");
		exit(EXIT_FAILURE);
	}
	v.mtype = 200;
	//while(1) {

		msgrcv(id, &v, sizeof(v.data),200, 0);
		perror("msgrcv");
		printf("%s\n", v.data);
		sleep(1);
		v.mtype = 300;
		strcpy(v.data, "global edge");
		msgsnd(id, &v, sizeof(v.data), 0);
		perror("msgsnd");
//	}	
	return 0;
}	
	

