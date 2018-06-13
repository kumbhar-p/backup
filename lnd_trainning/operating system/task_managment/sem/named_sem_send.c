#include "ipc.h"

sem_t *sem_fd;
int val;

void test(int shm_fd)
{
	printf("Entered into function test\n");
	char str[10] = {0};

	sem_wait(sem_fd);

	printf("Lock acquired by test\n");
	++(val);
	
	fgets(str, 10, stdin);
	write(shm_fd, str, 10);
	getchar();

	sem_post(sem_fd);
	printf("Unlocked in test\n");

}

int main (void)
{
	int shm_fd;


	if((shm_fd = shm_open("/named_shm", O_CREAT | O_EXCL | O_RDWR, 0660)) == -1)
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
	
	if((sem_fd = sem_open("/named_sem", O_CREAT | O_EXCL | O_RDWR, 0660, 1)) == SEM_FAILED)
{
		perror("sem_open");
	}

	test(shm_fd);	
	
	sem_close(sem_fd);
	close(shm_fd);

	return 0;
}
