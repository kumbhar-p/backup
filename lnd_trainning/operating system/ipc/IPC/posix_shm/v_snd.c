#include<stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main(void)
{
	char *ptr = NULL;
	int fd;

	fd = shmget(5, 52, IPC_CREAT | 0666);
	perror("shmget");
	
	printf("fd : %d\n", fd);

	ptr = shmat(fd, NULL, 0);
	perror("shmat");

	printf("enter msg\n");
	scanf("%s", ptr);

	shmdt(ptr);
	perror("shmdt");


	return 0;

}

