
#include "ipc.h"

sem_t *sem_fd;

void test1(int shm_fd)
{
	printf("Entered into function test\n");
	char str[10] = {0};

	sem_wait(sem_fd);

	printf("Lock acquired by test\n");
	

	read(shm_fd, str, 10);
	getchar();
	printf("readed data rec is str:%s\n",str);

	sem_post(sem_fd);
	printf("Unlocked in test\n");

}

int main (void)
{
	int shm_fd;


	if((shm_fd = shm_open("/named_shm", O_RDWR, 0660)) == -1)
	{
		perror("shm_open");
	}

	if (ftruncate(shm_fd, 20) == -1)
	{
		perror("ftruncate");
	}

	if (mmap(NULL, 20, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0) == MAP_FAILED)
	{
		perror("mmap");
	}
	
	if((sem_fd = sem_open("/named_sem", O_RDWR)) == SEM_FAILED)
	{
		perror("sem_open");
	}

	test1(shm_fd);	
	
	sem_close(sem_fd);
	close(shm_fd);

	sem_unlink("/named_sem");
	shm_unlink("/named_shm");

	return 0;
}
