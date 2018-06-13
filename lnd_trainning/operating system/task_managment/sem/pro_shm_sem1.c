
#include <stdio.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <semaphore.h>
#include <sys/stat.h>

struct sem{
	char str[10];
	int val;
	sem_t sem1;
};

struct sem *sem_object;

void test1(int shm_fd)
{
	char str1[10] = {0};

	printf("\n\n I'm in test1\n");
	sem_wait(&sem_object->sem1);
	
	printf("sem1 val after lock in test1 %d\n",sem_object->sem1);
	printf("lock acquired by test1\n");
	
	++(sem_object -> val);
	printf("val and pid_rec in test1 is %d %d\n",sem_object -> val,getpid());
	
	read(shm_fd, str1, 10);
	getchar();
//	sem_post(&sem_object->sem1);

	printf("sem1 val after unlock in test1 %d\n",sem_object->sem1);
	printf("unlocked by test1\n");
	printf("\ndata readed is str1 = %s\n",str1);
}

int main(void)
{
	int shm_fd;

	

	if((shm_fd = shm_open("/shm_sem", O_RDWR, 0660)) == -1)
		perror("shm_open");

	if(ftruncate(shm_fd, sizeof(struct sem)) == -1)
		perror("ftruncate");

	if((sem_object = (struct sem *)mmap(NULL, sizeof(struct sem), PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0)) == MAP_FAILED)
		perror("mmap");

//	sem_init(&(sem_object->sem1), 1, 1);
	printf("sem1 val before calling test1 %d\n",sem_object->sem1);
	test1(shm_fd);


	
	if(munmap(NULL, sizeof(struct sem)) == -1)
		perror("shm_munmap");

	sem_destroy(&sem_object -> sem1);
	
	if(shm_unlink("/shm_sem") == -1)
		perror("shm_unlink");
	

	return 0;
}

