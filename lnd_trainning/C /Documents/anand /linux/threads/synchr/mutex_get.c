#define _GNU_SOURCE
#include<stdio.h>
#include<pthread.h>
//pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t lock;
//pthread_mutex_t lock =  PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP;
pthread_mutex_t lock;
void *fun(void *ptr)
{
	int i = 0;
	printf("i am in function :\n");
	while(i <= 5){
		printf("i = %d\n",i);
		i++;
		}
}
int main(void)
{	
	pthread_t th_id;
	int status ;
	int kind;
	pthread_mutexattr_t attr;                              /* taking the attribete variable of opaque type*/
	pthread_mutexattr_init(&attr);                        /* initializing that attribute */
//	pthread_mutexattr_settype(&attr,PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP ); /* we can set our own mutex type */
	pthread_mutex_init(&lock,&attr);                                          /* initializing the mutex */
	pthread_mutexattr_gettype(&attr,&kind);                                  /* we can get the mutex type */
	printf("kind = %d\n",kind);
//	printf("compare = %d\n",PTHREAD_MUTEX_INITIALIZER);
	if(kind ==  PTHREAD_MUTEX_INITIALIZER ){
		printf("equal\n");
	}
	status = pthread_create(&th_id,NULL,fun,NULL);
	pthread_exit(NULL);
}
	
