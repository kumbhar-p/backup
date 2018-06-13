#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/types.h>

struct msgbuf{
	long int  mtype;
	char buf[1];
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
		exit(EXIT_FAILURE);
	}

	printf("msgid : %d\n", msgid);

	m->mtype = atoi(argv[1]);
	
	msgrcv(msgid, m, 20,atoi(argv[1]), 0);
	printf("%s\n", m->buf);

	if( ( msgctl(msgid, IPC_RMID, NULL) ) == -1 ) {
        perror("msgctl");
        exit(0);
    }

		
	exit(0);
}

