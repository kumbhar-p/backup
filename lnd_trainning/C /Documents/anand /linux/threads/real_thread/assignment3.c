#include<stdio.h>
#include<pthread.h>
#include<syscall.h>
pthread_t th_id;
pthread_attr_t object;
void *fun(void *ptr)
{
	int policy = 10;
	printf("pid = %d\n",getpid());
	printf("\tfunction is executing under thread:\n");
	printf("tid = %d\n",syscall(SYS_gettid));
	getchar();
	while(1){
		policy = policy+15;
//		printf("aaaaaaaaaaaaaaaaaa\n");
//		usleep(3);
		}
//getchar();
	
		


	


}
int main(void)
{
	int status;
	int policy = 1000;
	struct sched_param prio;
	struct sched_param prio1;
	
	int set_policy = 2;
	pthread_attr_init(&object);                  /* initializing the attribute */
	prio.sched_priority = 90;
	pthread_attr_setschedpolicy(&object,set_policy);  /* setting the policy through attribute */
	pthread_attr_setschedparam(&object,&prio);        /* setting the priority through attribute before creating thread */
	pthread_attr_getschedpolicy(&object,&policy);
	pthread_attr_getschedparam(&object,&prio1);
	pthread_attr_setinheritsched(&object,PTHREAD_EXPLICIT_SCHED);
	printf("\tpolicy by attr after changing = %d\n",*(&policy));
	printf("\tpriority by attr after changing = %d\n",prio1.sched_priority);

	
	status = pthread_create(&th_id,&object,fun,NULL);
	pthread_exit(NULL);
}
	
