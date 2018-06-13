#include<stdio.h>
#include<pthread.h>
pthread_mutex_t lock1;
pthread_mutex_t lock2;
pthread_t th_id;
pthread_t th_id1;


void * fun()
{
	int i = 0;

	for( i = 1; i <= 26; i++){
		pthread_mutex_lock(&lock1);
		printf("%d ",i);
		fflush(stdout);
	//	sleep(1);
		pthread_mutex_unlock(&lock2);
	}
	pthread_exit("hello");
}

void *fun1()
{
	char c;
	for(c = 'a'; c <= 'z'; c++) {
		pthread_mutex_lock(&lock2);
		printf("%c\n", c);
		fflush(stdout);
		sleep(1);
		pthread_mutex_unlock(&lock1);
	}
		pthread_exit("hi");
}

int main(void)
{
	pthread_mutex_init(&lock1, NULL);
	perror("pthread_mutex_init");
	
	pthread_mutex_init(&lock2, NULL);
	perror("pthread_mutex_init");

	pthread_mutex_lock(&lock2);

	pthread_create(&th_id, NULL, fun, NULL);
	//perror("pthread_create");

	pthread_create(&th_id1, NULL, fun1, NULL);
//	perror("pthread_create");
	
	pthread_join(th_id,NULL);
	pthread_join(th_id1,NULL);

//	pthread_destory(&lock1);	
//	pthread_destory(&lock2);	

	return 0;
}
