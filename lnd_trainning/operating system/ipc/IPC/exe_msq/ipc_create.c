//pending segfault
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/types.h>

struct data{
	long int  dfhd;
	char buf[20];
}v; 

int main(void)
{
	struct msqid_ds *m;
	int msgid;
//	struct data n;
	key_t key=IPC_PRIVATE;
	

	if( (msgid = msgget(key, IPC_CREAT |0666)) == -1) {
		perror("msgget");
		exit(EXIT_FAILURE);
	}
/*	
	printf("the identifier is %d\n", msgid);
	printf("m adddress  0x%x\n", (unsigned int)m);
	printf("n address is 0x%x\n", (unsigned int)n);
	if(msgctl(msgid,IPC_STAT,NULL) == -1)
	{
		perror("my ipc");
	//	exit(0);
	}*/

	printf("message in queue : %i\n",(int)m->msg_qnum);
	printf("bytes in queue : %i\n",(int)m->msg_qbytes);
	printf("last process sending : %i\n",(int)m->msg_lspid);
	printf("last process receving : %i\n", (int)m->msg_lrpid);
	
	exit(0);
}

