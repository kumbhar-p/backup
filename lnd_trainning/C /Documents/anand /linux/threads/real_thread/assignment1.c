#define _GNU_SOURCE
#include<stdio.h>
#include<pthread.h>
#include <errno.h>

pthread_t th_id;
pthread_attr_t object;
struct sched_param *prio = NULL;
struct sched_param *prio1 = NULL;
void *fun(void *ptr)
{
	int policy;
    struct sched_param priority;
    printf("\tfunction is executing under thread:\n");
	pthread_getschedparam(pthread_self(),&policy,&priority);
    printf("\tin thread the policy is = %d\n",policy);
    printf("\tin thread the priority is = %d\n",priority.sched_priority);


	printf("\tfunction is executing under thread:\n");


	


}
int main(void)
{
	int status;
	int policy;
	prio = malloc(sizeof(struct sched_param));;
	prio1 = malloc(sizeof(struct sched_param));
	
	int set_policy = 2;
	int ret;
	pthread_attr_init(&object);                  /* initializing the attribute */
	pthread_attr_getschedpolicy(&object,&policy); /* getting the default scheduling policy */
	printf("\tdefault policy by attr= %d\n",*(&policy));
	pthread_attr_getschedparam(&object,prio);    /* getting the default priority */
	printf("\tdefault priority by attr = %d\n",prio->sched_priority);
	prio1->sched_priority = 30;
	pthread_attr_setschedpolicy(&object,SCHED_RR);  /* setting the policy through attribute */
	pthread_attr_setschedparam(&object,prio1);        /* setting the priority through attribute before creating thread */
	ret = pthread_attr_setinheritsched(&object,PTHREAD_EXPLICIT_SCHED);
	printf("ret = %d\n",ret);
//	pthread_attr_setinheritsched(&object,PTHREAD_INHERIT_SCHED);
	pthread_attr_getschedpolicy(&object,&policy);
	pthread_attr_getschedparam(&object,prio1);
	printf("\tpolicy by attr after changing = %d\n",*(&policy));
	printf("\tpriority by attr after changing = %d\n",prio1->sched_priority);

	
	status = pthread_create(&th_id,&object,fun,NULL);
	printf("status = %d\n",status);
	printf("ret = %d\n",pthread_join(th_id,&status));
	pthread_exit(NULL);
//	pthread_attr_destroy(&object);
}
	
