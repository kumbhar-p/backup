/* ********************     RECURSIVE MUTEX    **************************/
/***
 * here it can do everything  what error mutex does.
 * But here it is necessary to unlock the same number of times we lock the mutex .
 * it maintains a count for these purpose. 
****/

#define _GNU_SOURCE
#include<stdio.h>
#include<pthread.h>
#include<error.h>
pthread_mutex_t lock = PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP; /*not possible to initialize both the mutex  */
pthread_t th_id,th_id1;
void *fun(void *ptr)
{
	int i = 0;
	int ret_fun = 0;
//	usleep(10);
	ret_fun = pthread_mutex_lock(&lock); 
	ret_fun = pthread_mutex_lock(&lock);
	printf("ret of lock = %d\n",ret_fun);
	while(i <= 10){
	printf("in function:\n");
	i++;
	}
	pthread_mutex_unlock(&lock);    /*To own these lock by another thread it is necessary unlock these 
									  same number of times of lock applied for these thread.but these case won't 
									  apply for the last thread. it's not a matter of locking and un locking	 */
//    pthread_mutex_unlock(&lock);

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
	pthread_mutex_unlock(&lock);

}

int main()
{
//	pthread_mutex_init(&lock,NULL);
	int status = pthread_create(&th_id,NULL,fun,NULL);

		status = pthread_create(&th_id1,NULL,fun1,NULL);

	pthread_exit(NULL);

}
