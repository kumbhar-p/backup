#include "header.h"

int done;
int total_threads = 2;

pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_cond_t cond1 = PTHREAD_COND_INITIALIZER;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void * threadFunc1(void *arg)
{
	int *thread_no = (int *)arg;
	int t_loop1 = 0;
	
	pthread_mutex_lock(&mutex);
	
	printf("threadFunc1 acquired the lock\t done = %d\n",done);
	
	while(done != 1)
	{
//		printf("in thread-1 thread_no = %d\n", *thread_no);
		pthread_cond_wait(&cond1, &mutex);
	}

//	pthread_mutex_lock(&mutex);
	while(t_loop1 < 3)
	{
		printf("thread-2 loop %d\n",t_loop1++);
		sleep(1);
	}
	++done;
	
	printf("ThreadFunc1 generating conditional signal\t done = %d\n\n",done); 
	
	pthread_cond_signal(&cond);
	pthread_mutex_unlock(&mutex);

	return NULL;

}


void * threadFunc(void *arg)
{
//	int *thread_no = (int *)arg;
	int t_loop = 0;

	
	pthread_mutex_lock(&mutex);
	
	printf("threadFunc acquired the lock\t done = %d\n",done);
	
	while(done !=  0)
	{
	//	printf("in thread-1 thread_no = %d\n", *thread_no);
		pthread_cond_wait(&cond, &mutex);
	
	}
//	pthread_mutex_lock(&mutex);
	while(t_loop < 3)
	{
		printf("thread-1 loop %d\n",t_loop++);
		sleep(1);
	}
	++done;
	
	printf("ThreadFunc generating conditional signal\t done = %d\n\n",done); 
	pthread_cond_signal(&cond1);
	
	pthread_mutex_unlock(&mutex);

	return NULL;

}



int main(void)
{
	pthread_t t1,t2;
	int loop = 0;
//	int var = 0;
//	int *t1_var = &var;
	if(pthread_create(&t1, NULL, threadFunc,NULL) != 0)
		perror("pthread_create");

//	var = 1;

	if(pthread_create(&t2, NULL, threadFunc1, NULL) != 0)
		perror("pthread_create");
	
	if(pthread_mutex_lock(&mutex) != 0)
		perror("mutex_lock");

	while(total_threads > done)
	{
		printf("main thread was in waiting done = %d\n",done);
		pthread_cond_wait( &cond, &mutex);
	}
	
		printf("main out of waiting done = %d\n",done);
	
	/*	if(pthread_join(t1, NULL) != 0)
		perror("pthread_join");

	if(pthread_join(t2, NULL) != 0)
		perror("pthread_join");*/
	
/*	while(loop < 5)
	{
		printf("%d\t in loop: \t", loop++);
	}*/
	
	printf("Threads execution completed \n");

	if(pthread_mutex_unlock(&mutex) != 0)
		perror("mutex_unlock");
	
	return 0;
}

