#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>

int main(int argc, char **argv)
{

	int id;
	int ret;

	if(argc < 3) {
		printf("uasge : ./a.out setnum val\n");
		exit(EXIT_SUCCESS);
	}
	
	id = semget(5, 5 , IPC_CREAT | 0666);
	perror("semget");
	
	ret = semctl(id, 2 , SETVAL, 1);
	perror("semctrl");

	printf("ret : %d\n", ret);

	return 0;

}
