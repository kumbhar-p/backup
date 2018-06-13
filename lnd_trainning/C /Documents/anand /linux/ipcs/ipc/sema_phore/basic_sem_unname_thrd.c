#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<semaphore.h>
#include<sys/mman.h>
#include<pthread.h>
sem_t sem_addr;
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
void *fun(void *p){
	int i = 0;
	printf("in thread function :\n");
	pthread_mutex_lock(&lock);
//	sem_wait(&sem_addr);
	for(i =0 ;i <= 10; i++){
		sleep(1);
		printf(" in function:i = %d\n",i);
	}
//	sem_post(&sem_addr);
	pthread_mutex_unlock(&lock);

}
void *fun1(void *p){
	int i = 0;
//	sem_wait(&sem_addr);
	pthread_mutex_lock(&lock);
	printf("in thread function one:\n");
	for(i =0 ;i <= 10; i++){
	//	sleep(1);
		printf(" in function one :i = %d\n",i);
	}
//	sem_post(&sem_addr);
	pthread_mutex_unlock(&lock);

}
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
	pthread_t th_id;
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
	sem_init(&sem_addr,0,1);
	pthread_create(&th_id,NULL,fun,NULL);
	pthread_create(&th_id,NULL,fun1,NULL);
	pthread_exit(NULL);
	
}
	
	
	
	
