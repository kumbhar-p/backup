#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include <errno.h>
#include<sched.h>
int a = 10;
pthread_t tid1;
pthread_t tid;
void   *fun(void *ptr)
{
	pthread_t tid1;
	int val;
	
	printf("i am in thread function:\n");
	while(1){
	printf("i am in thread function:\n");
	sleep(1);
	}	
	
}
void *fun1(void *ptr)
{
	printf("i am in function 1 :\n");
	printf("ret = %d\n", pthread_setcancelstate(PTHREAD_CANCEL_DISABLE,NULL));
	printf("ret = %d\n", pthread_setcanceltype(PTHREAD_CANCEL_DEFERRED,NULL));
//	pthread_setcancelstate(PTHREAD_CANCEL_DISABLE,0);
	while(1){
	printf("i am in function 1 :\n");
	sleep(1);
	}
	pthread_exit(&a);
}

int main(void)
{
	void **status;
	int status1;
	int ptr;
	printf("process pid = %d\n",getpid());
	status1 = pthread_create(&tid,NULL,fun,NULL);
	status1 = pthread_create(&tid1,NULL,fun1,NULL);
	sleep(1);
	pthread_cancel(tid1);
	pthread_cancel(tid);
	pthread_join(tid,status);
//	pthread_exit(NULL);
	
}
