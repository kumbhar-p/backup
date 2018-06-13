#include<stdio.h>
#include<unistd.h>
//#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include <errno.h>
#include<sched.h>
#include<signal.h>
int a = 10;
pthread_t tid,tid1;
void fun2(void)
{
	printf("in handler sigint detected:\n");
}
void   *fun(void)
{
	int status;
//	pthread_t tid1;
	int val;
	printf("i am in thread function:\n");
	printf("tgid  fun =%d\n",getpid());
	printf("pid of fun  = %d\n",(unsigned int)(syscall(SYS_gettid)));
//	pthread_join(tid1,&val);
	return 50;
//	pthread_detach(pthread_self());
	
}
void *fun1(void)
{

	printf(" in function two :\n");
	printf("i am in thread function:\n");
	printf("tgid  fun =%d\n",getpid());
	printf("pid of fun  = %d\n",(unsigned int)(syscall(SYS_gettid)));

	//pause();
	signal(SIGINT,fun2);
	sleep(5);
//	pause();

	exit(70);

}

int main(void)
{
//	pthread_t tid;
	int status;
	int ptr;
	printf("process pid = %d\n",getpid());
	status = pthread_create(&tid,NULL,fun,NULL);
//	pthread_detach(tid);
	pthread_join(tid,&ptr);
	status = pthread_create(&tid1,NULL,fun1,NULL);
	sleep(1);	
	pthread_kill(tid1,SIGINT);
//	pause();
//	killpg(getpid(),SIGUSR1);
//	pthread_join(tid1,&ptr);
//	printf("ret value = %d\n",*(&ptr));
	pthread_exit(NULL);
	
}
