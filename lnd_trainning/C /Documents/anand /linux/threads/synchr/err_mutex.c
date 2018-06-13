/* ********************     ERROR MUTEX    **************************/
/***
 * here instead of speed correctness is the importent factor
 * these mutex return EDEDLK if you try to lock the mutex two times
 * these mutex return EPERM it indicates mutex that is not yours
****/

#define _GNU_SOURCE
#include<stdio.h>
#include<pthread.h>
#include<error.h>
pthread_mutex_t lock1 = PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP; /*not possible to initialize both the mutex  */
pthread_mutex_t lock = PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP; /* static mutex initialization */
pthread_t th_id,th_id1;
void *fun(void *ptr)
{
	int i = 0;
	int ret_fun = 0;
	ret_fun = pthread_mutex_lock(&lock); 
	ret_fun = pthread_mutex_lock(&lock);
	printf("ret of lock = %d\n",ret_fun);
	while(i <= 10){
	printf("in function:\n");
	i++;
	}
//	pthread_mutex_unlock(&lock);
//	pthread_mutex_unlock(&lock);

}
void *fun1(void *ptr)
{
    int j = 0;
	int ret = 0;
	int un_ret = 0;
	un_ret = pthread_mutex_unlock(&lock);
	if(un_ret == 1){
		printf("ERROR : you are trying to unlock the mutex lock from unkown owner :\n");
	}
	printf("return of unlock = %d\n",un_ret);
	pthread_mutex_lock(&lock1);
	ret = pthread_mutex_lock(&lock1);
	printf("ret of lock = %d\n",ret);
    while(j <= 10){
    printf("in function function one i = %d:\n",j);
    j++;
    }
	pthread_mutex_unlock(&lock1);

}

int main()
{
//	pthread_mutex_init(&lock,NULL);
	int status = pthread_create(&th_id,NULL,fun,NULL);

		status = pthread_create(&th_id1,NULL,fun1,NULL);

	pthread_exit(NULL);

}
