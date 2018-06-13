#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/types.h>

int main(void)
{
	key_t key = IPC_PRIVATE;
	int msgid;
	if( (msgid = msgget(key, 0666)) == -1) {
		perror("msgget");
		exit(EXIT_FAILURE);
	}
	
	printf(" the key is : %d\n", key);
	printf("the identifier is %d\n", msgid);
	
	exit(0);
}

