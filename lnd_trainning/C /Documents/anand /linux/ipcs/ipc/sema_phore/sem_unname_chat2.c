#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<semaphore.h>
#include<sys/mman.h>
struct count{
	sem_t sem_addr,sem_addr1;
	char buf1[100];
	char buf2[100];
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
	sem_init(&shared->sem_addr1,1,1);
	pid = fork();
    if(pid > 0){
        while(1){
		printf("parent wait for recieving :\n");
		sem_wait(&shared->sem_addr1);
        printf("message recived is :%s\n",shared->buf1);
		sem_post(&shared->sem_addr1);
		usleep(10);
    }
    }
    if(pid == 0){
    while(1){
		sem_wait(&shared->sem_addr);
    	printf("writing into shared memory :\n");
    	fgets(shared->buf2,100,stdin);
		sem_post(&shared->sem_addr);
		usleep(10);

    	}
    }

}
	
	
	
	
