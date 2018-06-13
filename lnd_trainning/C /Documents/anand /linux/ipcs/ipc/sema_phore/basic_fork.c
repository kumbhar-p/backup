#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<semaphore.h>
#include<sys/mman.h>
#include<pthread.h>
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
int main(void)
{
	int pid;
	int ptr = 0;
	int i = 0;
	pid = fork();

	if(pid > 0){
		printf("in parent process :\n");
	printf("%d\n",	pthread_mutex_lock(&lock));
		for(i= 0; i <= 50 ; i++){
			
			printf("parent : %d\n",(ptr)++);
		}
		pthread_mutex_unlock(&lock);
	
	}
	else if(pid == 0){
//		sleep(10);
		printf("in child process :\n");
		pthread_mutex_lock(&lock);
		for(i = 0;i <= 50;i++){
			printf("child : %d\n",(ptr)++);
	
		}
	}
		pthread_mutex_unlock(&lock);
}
	
	
	
	
