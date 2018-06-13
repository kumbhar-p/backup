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

	printf("output : %s\n", ptr);

	shmdt(ptr);//detaches the shared memory segment located at the address specified  by  shmaddr  from the address space of the calling process.
	perror("shmdt");

	shmctl(fd, IPC_RMID, 0); //Mark the segment to be  destroyed.
	perror("shmctl");

	return 0;

}

