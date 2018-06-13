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
	struct count *shared;
	fd = shm_open("/shmaa",O_RDWR|O_CREAT,0777);
	if(fd == -1){
		printf("fail to open:\n");
		exit(0);
	}
	ftruncate(fd,4096);
	shared = mmap(NULL,4096,PROT_READ|PROT_WRITE,MAP_SHARED,fd,(off_t)0);
	if(shared == NULL){
		printf("map fail:\n");
		exit(0);
	}
	sem_init(&shared->sem_addr,1,1);
	printf("writing into shared memory :\n");
	shared->count = 123456;
}
	
	
	
	
