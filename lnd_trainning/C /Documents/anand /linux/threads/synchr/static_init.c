#define _GNU_SOURCE
#include<stdio.h>
#include<pthread.h>
//pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t lock = PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_LP  ;
pthread_t th_id,th_id1;
void *fun(void *ptr)
{
	int i = 0;
	int ret_fun = 0;
//	printf("dead lock = %d\n",EDEADLK);
	ret_fun = pthread_mutex_lock(&lock);
	ret_fun = pthread_mutex_lock(&lock);
	printf("ret of lock = %d\n",ret_fun);
	while(i <= 10){
	printf("in function:\n");
	i++;
	}
	pthread_mutex_unlock(&lock);

}
void *fun1(void *ptr)
{
    int j = 0;
	int ret = 0;
	pthread_mutex_lock(&lock);
	ret = pthread_mutex_lock(&lock);
	printf("ret of lock = %d\n",ret);
    while(j <= 10){
    printf("in function function one i = %d:\n",j);
    j++;
    }
	pthread_mutex_unlock(&lock);

}

int main()
{
//	pthread_mutex_init(&lock,NULL);
	int status = pthread_create(&th_id,NULL,fun,NULL);

		status = pthread_create(&th_id1,NULL,fun1,NULL);

	pthread_exit(NULL);

}
