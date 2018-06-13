#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<semaphore.h>
#include<sys/mman.h>

int main(void)
{
	int fd;
	int *mmap_addr;
	int *ptr;
	int pid;
	int i = 0;
	int zero = 0;
	sem_t *sem_addr;
	fd = shm_open("/shmq",O_RDWR|O_CREAT,0777);
	ftruncate(fd,4096);
	sem_addr = sem_open("/sem_phr",O_EXCL,0777,1);
	printf("address of semaphore = %p\n",sem_addr);
	if(fd == -1){
		printf("fail to open:\n");
		exit(0);
	}
	ftruncate(fd,4096);
	write(fd,&zero,4);
	mmap_addr = mmap(NULL,4096,PROT_READ|PROT_WRITE,MAP_SHARED,fd,(off_t)0);
	ptr = mmap_addr;
	pid = fork();
	if(pid > 0){
		printf("in parent process :\n");
		//ptr = mmap_addr;
		if(sem_wait(sem_addr) == -1){
			printf("fail in semaphore wait :\n");
			exit(0);
		}
		
		for(i= 0; i <= 50 ; i++){
			
			printf("parent : %d\n",(*ptr)++);
		}
		if(sem_post(sem_addr) == -1){
			printf("fail in sem post:\n");
			exit(0);
		}
	
	}
	else if(pid == 0){
		printf("in child process :\n");
		sem_wait(sem_addr);
		for(i = 0;i <= 50;i++){
			printf("child : %d\n",(*ptr)++);
	
		}
		sem_post(sem_addr);
	}
}
	
	
	
	
