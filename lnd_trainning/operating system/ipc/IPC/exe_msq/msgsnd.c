#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/types.h>

struct msgbuf{
	long int  mtype;
	char buf[81];
}; 

int main(int argc, char **argv)
{
	int msgid;
	struct msgbuf *m;

	if(argc < 2) {
		printf("use : ./a.out mtypenum\n");
		exit(0);
	}
	m = (struct msgbuf *) malloc (sizeof(struct msgbuf) + 20 );
		

	if( (msgid = msgget(10, IPC_CREAT |0666)) == -1) {
		perror("msgget");
		exit(0);
	}

	printf("msgid : %d\n", msgid);

	m->mtype = atoi(argv[1]);

	printf("enter message\n");
	scanf("%s", m->buf);
	
	msgsnd(msgid, m, 20, 0);
	
	if( ( msgctl(msgid, IPC_RMID, NULL) ) == -1 ) {
		perror("msgctl");
		exit(0);
	}
		
	exit(0);
}

