#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<errno.h>
#include<sched.h>
pthread_t th_id;
pthread_attr_t object;
void *fun(void *ptr)
{
	int policy;
	int set_policy = SCHED_RR;
	int prio = 1;
	int ret;
	int max;
	printf("pid = %d\n",getpid());
	printf("\tfunction is executing under thread:\n");
	struct sched_param *priority = malloc(sizeof(struct sched_param));
	struct sched_param priority1;
	priority1.sched_priority = 98;
	/* to set the priority and policy in thread */
  	if((ret = pthread_setschedparam(pthread_self(),set_policy,&priority1)) != 0)
    		printf("fail in setsched\n");
	pthread_getschedparam(th_id,&policy,priority);
	printf("\tin thread the policy is = %d\n",policy);
	printf("\tin thread the priority is = %d\n",priority->sched_priority);
	

}
int main(void)
{
	int status;
	int set_policy = 1;
	int inheritsched;
	int ret;
	status = pthread_create(&th_id,NULL,fun,NULL);
	pthread_exit(NULL);
}
	
