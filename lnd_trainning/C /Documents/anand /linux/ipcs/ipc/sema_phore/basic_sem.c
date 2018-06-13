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
	int ptr1 = 0;
	int pid;
	int i = 0;
	int zero = 0;
	sem_t *sem_addr;
	int sem_count;
	fd = shm_open("/shmq",O_RDWR|O_CREAT,0777);
	sem_addr = sem_open("/sem_phr12",O_CREAT,0777,2);
	printf("address of semaphore = %p\n",sem_addr);
	if(fd == -1){
		printf("fail to open:\n");
		exit(0);
	}
	ftruncate(fd,4096);
	sem_getvalue(sem_addr,&sem_count);
	printf("semaphore count = %d\n",sem_count);
	write(fd,&zero,4);
	mmap_addr = mmap(NULL,4096,PROT_READ|PROT_WRITE,MAP_SHARED,fd,(off_t)0);
		ptr = mmap_addr;
	pid = fork();
	if(pid > 0){
		printf("in parent process :\n");
		for(i= 0; i <= 50 ; i++){
			
			printf("parent : %d\n",(*ptr)++);
			printf("parent1 : %d\n",ptr1++);
		}
	
	}
	else if(pid == 0){
		printf("in child process :\n");
		for(i = 0;i <= 50;i++){
			printf("child : %d\n",(*ptr)++);
			printf("child1 : %d\n",ptr1++);
	
		}
	}
}
	
	
	
	
