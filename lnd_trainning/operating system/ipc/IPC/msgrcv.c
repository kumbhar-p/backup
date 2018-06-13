#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdlib.h>
struct msgbuf{
	long mtype;
	char data[10];
};

int main(void)
{
	struct msgbuf v;
	int id;
	
	id = msgget(1, IPC_CREAT | MSG_NOERROR | 0666);
	perror("msgget");

	if(id < 0) {
		printf("msgget failed\n");
		exit(EXIT_FAILURE);
	}

	v.mtype = 2;

	msgrcv(id, &v, sizeof(v.data), 2, 0);
	perror("msgrcv");
	printf("%s\n", v.data);

	return 0;
}	
	

