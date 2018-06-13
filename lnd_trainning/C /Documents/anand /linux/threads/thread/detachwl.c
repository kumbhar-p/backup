#include<stdio.h>
#include<unistd.h>
//#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include <errno.h>
#include<sched.h>
int a = 10;
pthread_t tid,tid1;
void   *fun(void)
{
	int status;
	while(1){
		printf("from fun:\n");
//		printf("thread id = %d\n",pthread_self());
		printf("pid of fun  = %d\n",(unsigned int)(syscall(SYS_gettid)));
		sleep(3);
	}
	
}

int main(void)
{
//	pthread_t tid;
	int status;
	int ptr;
	printf("process pid = %d\n",getpid());
	status = pthread_create(&tid,NULL,fun,NULL);
	sleep(1);
//printf("thread id = %lu\n",pthread_self());
	pthread_detach(tid);
	pthread_detach(tid);
//	pthread_join(tid,&ptr);
	printf("ret value = %d\n",*(&ptr));
	
}
