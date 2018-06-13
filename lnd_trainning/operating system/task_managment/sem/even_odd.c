#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>
#include <semaphore.h>

void *thread_even(void *arg);
void *thread_odd(void *arg);
void *thread_check(void *arg);

int num = 0;

sem_t bin_sem;


int main() {
	int res;
	pthread_t a_thread;
	pthread_t p_thread;
//	pthread_t p_thread3;	
	void *thread_result;
	
	res = sem_init(&bin_sem, 0, 1);
	
	res = pthread_create(&a_thread, NULL, thread_even, NULL);
	if (res != 0) {
		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}
	printf("Thread 1 created\n");
	
	res = pthread_create(&p_thread,NULL,thread_odd, NULL);
	if (res != 0) {
		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}
	printf("Thread 2 created\n");

/*	res = pthread_create(&p_thread3,NULL,thread_check, NULL);
	if (res != 0) {
		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}
	printf("Thread 3 created\n");*/
	
	res = pthread_join(a_thread, &thread_result);

	if (res != 0) {
		perror("Thread join failed");
		exit(EXIT_FAILURE);
	}
	res = pthread_join(p_thread, &thread_result);
	if (res != 0) {
		perror("Thread join failed");
		exit(EXIT_FAILURE);
	}
/*	res = pthread_join(p_thread3, &thread_result);
	if (res != 0) {
		perror("Thread join failed");
		exit(EXIT_FAILURE);
	}*/

	//pthread_exit(NULL);
	printf("threads joined\n");

	sem_destroy(&bin_sem);

	printf("main thread died\n");
}

void *thread_even(void *arg) {
	printf("even thread entering to infinite loop\n");
	while(num < 20){
		sem_wait(&bin_sem);
		printf("In even thread num %d\n",num);
		num++;
		sleep(1);
 		sem_post(&bin_sem);
		sleep(1);
	}
}

void *thread_odd(void *arg) {
	printf("odd thread entering to infinite loop\n");
	while(num < 20){
		sem_wait(&bin_sem);
		printf("In odd thread num %d\n",num);
		num++;
		sleep(1);
		sem_post(&bin_sem);
		sleep(1);
	}
}

void *thread_check(void *arg)
{
	while(num < 20)
	{
		sem_wait(&bin_sem);
		printf("num in t3 = %d\n",num);
		sem_post(&bin_sem);
	}

}
