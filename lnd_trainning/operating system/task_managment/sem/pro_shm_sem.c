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

void test(int shm_fd)
{
	printf("Entered into function test\n");
	
	//sem_wait(&sem_object->sem1);


	printf("sem1 val in sen after lock in test %d\n",sem_object->sem1);
	
	printf("Lock acquired by test\n");
	++(sem_object -> val);
	
	printf("val and pid in test is %d %d\n",sem_object -> val,getpid());
	
	fgets(sem_object -> str, 10, stdin);
	write(shm_fd,sem_object -> str,10);
	
	sem_post(&sem_object->sem1);
	printf("sem1 val in sen after unlock %d\n",sem_object->sem1);
	printf("Unlocked in test\n");
}

int main(void)
{
	int shm_fd;

	if((shm_fd = shm_open("/shm_sem", O_CREAT | O_EXCL | O_RDWR, 0660)) == -1)
		perror("shm_open");

	if(ftruncate(shm_fd, sizeof(struct sem)) == -1)
		perror("ftruncate");

	if((sem_object = (struct sem *)mmap(NULL, sizeof(struct sem), PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0)) == MAP_FAILED)
		perror("mmap");

	sem_init(&(sem_object->sem1), 2, 0);

	printf("sem1 val in sen before cal %d\n",sem_object->sem1);

	test(shm_fd);

//	sem_destroy(&sem_object -> sem1);

	return 0;
}




