/* ********************     FAST MUTEX    **************************/
#define _GNU_SOURCE
#include<stdio.h>
#include<pthread.h>
pthread_t th_id,th_id1;
pthread_mutex_t lock,lock1;
void *fun(void *ptr)
{
	int i = 0;
	int ret_fun = 0;
//	ret_fun = pthread_mutex_lock(&lock); /*if we enable these then these thread goes to dead lock state */
	ret_fun = pthread_mutex_lock(&lock);
	printf("ret of lock = %d\n",ret_fun);
	while(i <= 10){
	printf("in function:\n");
	i++;
	}
	pthread_mutex_unlock(&lock);
	pthread_mutex_unlock(&lock1); /* In fast mutex type any thread can unlock the deadlocked thread */

}
void *fun1(void *ptr)
{
    int j = 0;
	int ret = 0;
	pthread_mutex_lock(&lock1);
	ret = pthread_mutex_lock(&lock1);
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
	pthread_mutex_init(&lock,NULL); 	/*it will initialize the mutex in run time  with default type (fast mutex) */
	pthread_mutex_init(&lock1,NULL); 	/*it will initialize the mutex in run time  with default type (fast mutex) */
	int status = pthread_create(&th_id,NULL,fun,NULL);

		status = pthread_create(&th_id1,NULL,fun1,NULL);

	pthread_exit(NULL);

}
