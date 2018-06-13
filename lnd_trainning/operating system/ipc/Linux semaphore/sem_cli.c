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
	struct sem *str;
	shm_id = shm_open("/shm", O_RDWR,0666);
	
	ftruncate(shm_id, 80);
	sem1 = sem_open("/sem", O_RDWR);

	str = mmap(NULL, 80, PROT_WRITE | PROT_READ, MAP_SHARED, shm_id, 0);

	str ->a;
	
	while(1) {
		sleep(2);
		sem_wait(sem1); 

		printf("waiting\n");
		printf("a : %d\n",str -> a);
		sleep(2);
		sem_post(sem1);

		printf("posting\n");
		
	}
	return 0;
}
		

