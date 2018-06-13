#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<semaphore.h>
#include<sys/mman.h>
struct timespec value;
int main(void)
{
	int fd;
	int *mmap_addr;
	int *ptr;
	int ptr1 = 0;
	int pid;
	int i = 0;
	int zero = 0;
	sem_t *sem_addr;
	int sem_count;
	fd = shm_open("/shmq",O_RDWR|O_CREAT,0777);
	sem_addr = sem_open("/sem_phr134",O_CREAT,0777,0);
	printf("address of semaphore = %p\n",sem_addr);
	if(fd == -1){
		printf("fail to open:\n");
		exit(0);
	}
	ftruncate(fd,4096);
	sem_getvalue(sem_addr,&sem_count);
	printf("semaphore count = %d\n",sem_count);
	write(fd,&zero,4);
	value.tv_sec = time(NULL)+10;
	mmap_addr = mmap(NULL,4096,PROT_READ|PROT_WRITE,MAP_SHARED,fd,(off_t)0);
	ptr = mmap_addr;
	pid = fork();
	if(pid > 0){
		printf("in parent process :\n");
//		sem_wait(sem_addr);
//		sem_trywait(sem_addr);
		sem_timedwait(sem_addr,&value);
		sem_getvalue(sem_addr,&sem_count);
		printf("semaphore count in parent = %d\n",sem_count);
		sem_post(sem_addr);
		sem_getvalue(sem_addr,&sem_count);
		printf("semaphore count in parent after = %d\n",sem_count);
	
	}
	else if(pid == 0){
		printf("in child process :\n");
		sem_wait(sem_addr);
		sem_getvalue(sem_addr,&sem_count);
		printf("semaphore count in child = %d\n",sem_count);
		sem_post(sem_addr);
		sem_getvalue(sem_addr,&sem_count);
		printf("semaphore count in chld afte = %d\n",sem_count);
	}
}
	
	
	
	
