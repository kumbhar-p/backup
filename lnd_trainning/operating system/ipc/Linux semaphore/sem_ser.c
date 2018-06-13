#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<semaphore.h>
#include<sys/mman.h>
sem_t *sem1;
struct sem{
	int a;
};

int main(void)
{
	int shm_id;
	struct sem *str = NULL;
	shm_id = shm_open("/shm", O_RDWR | O_CREAT, 0666);
	perror("shm_open")	;
	ftruncate(shm_id, 80);
	perror("ftruncate");

	str = mmap(NULL, 80, PROT_WRITE | PROT_READ, MAP_SHARED, shm_id, 0);
perror("mmap");
	sem1 = sem_open("/sem", O_RDWR | O_EXCL | O_CREAT, 0666,1);
	perror("sem_open");
	str -> a = 0;
	
	while(1) {
		sleep(1);
		sem_wait(sem1); 
		perror("sem_wait") ;
		printf("waiting\n");
		printf("a : %d\n", str -> a);
		sleep(3);
		sem_post(sem1);
		printf("posting\n");
		str -> a++;		
	}
	return 0;
}
		

