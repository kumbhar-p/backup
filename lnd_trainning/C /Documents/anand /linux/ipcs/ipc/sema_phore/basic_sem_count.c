#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<semaphore.h>
#include<sys/mman.h>
struct count{
	sem_t sem_addr;
	int count ;
	};

int main(void)
{
	int fd;
	int *mmap_addr;
	int *ptr;
	int ptr1 = 0;
	int pid;
	int i = 0;
	int zero = 0;
//	sem_t *sem_addr;
	struct count *shared;
	fd = shm_open("/shmq",O_RDWR|O_CREAT,0777);
//	shared = sem_open("/sem_phr",O_CREAT,0777,1);
//	printf("address of semaphore = %p\n",shared->sem_addr);
	if(fd == -1){
		printf("fail to open:\n");
		exit(0);
	}
	ftruncate(fd,4096);
	write(fd,&zero,4);
	shared = mmap(NULL,4096,PROT_READ|PROT_WRITE,MAP_SHARED,fd,(off_t)0);
	ptr = mmap_addr;
	sem_init(&shared->sem_addr,1,1);
	pid = fork();
	if(pid > 0){
		printf("in parent process :\n");
		sem_wait(&shared->sem_addr);
		for(i= 0; i <= 50 ; i++){
			printf("parent  = %d\n",shared->count++);		
		}
		sem_post(&shared->sem_addr);
	
	}
	else if(pid == 0){
		printf("in child process :\n");
		sem_wait(&shared->sem_addr);
		for(i = 0;i <= 50;i++){
			printf("child  = %d\n",shared->count++);		
		}
		sem_post(&shared->sem_addr);
	}
	sem_destroy(&shared->sem_addr);
}
	
	
	
	
