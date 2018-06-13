#include<stdio.h>
#include<pthread.h>
pthread_t th_id;
pthread_attr_t object;
void *fun(void *ptr)
{
	int policy;
    struct sched_param priority;
    printf("\tfunction is executing under thread:\n");
//  pthread_getschedparam(pthread_self(),&policy,&priority);
	pthread_getschedparam(th_id,&policy,&priority);
    printf("\tin thread the policy is = %d\n",policy);
    printf("\tin thread the priority is = %d\n",priority.sched_priority);
	printf("\tfunction is executing under thread:\n");
}
int main(void)
{
	int status;
	int policy;
	struct sched_param schedparam;
	struct sched_param prio1;
	
	int set_policy = 2;
	int ret;
 
	schedparam.sched_priority = 3;
	pthread_attr_init(&object);
	pthread_attr_setinheritsched(&object, PTHREAD_EXPLICIT_SCHED);
	pthread_attr_setschedpolicy(&object, SCHED_RR);
	pthread_attr_setschedparam(&object, &schedparam);
	status = pthread_create(&th_id, &object, &fun, NULL);
	printf("status = %d\n",status);
	pthread_exit(NULL);
}
	
