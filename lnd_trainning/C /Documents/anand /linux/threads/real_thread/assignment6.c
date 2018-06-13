#include<stdio.h>
#include<pthread.h>

pthread_mutex_t count_mutex = PTHREAD_MUTEX_INITIALIZER;
int count;
void *threadProc();
int rc;
pthread_attr_t thread_attr;
pthread_t thread1;
main()
{
struct sched_param schedparam;

pthread_mutex_lock( &count_mutex );

rc = pthread_attr_init(&thread_attr);

rc = pthread_attr_setinheritsched(&thread_attr,PTHREAD_EXPLICIT_SCHED);

schedparam.sched_priority = 50; 
pthread_attr_setschedparam(&thread_attr, &schedparam);
pthread_attr_setschedpolicy(&thread_attr, SCHED_RR );

printf("val = %d\n",pthread_create( &thread1, &thread_attr, &threadProc, NULL));

count++;

pthread_mutex_unlock( &count_mutex );

sleep(5);
exit(0);
}

void *threadProc()
{
pthread_mutex_lock( &count_mutex );
printf("****inside thread fun****\n");
count++;
pthread_mutex_unlock( &count_mutex );
return NULL;
}
