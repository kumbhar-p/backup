#include<stdio.h>
#include<unistd.h>
//#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include <errno.h>
#include<sched.h>
int a = 10;
	pthread_t tid1;
int *fun1(void);
void   *fun(void)
{
	int status;
	pthread_t tid1;
	int val;
	a = a+10;
	printf("i am in thread function:\n");
	printf("tgid  fun =%d\n",getpid());
	printf("pid of fun  = %d\n",(unsigned int)(syscall(SYS_gettid)));
//	status = pthread_create(&tid1,NULL,fun1,NULL);
//	pthread_join(tid1,&val);
//	getchar();
	printf("fun1 is exited =%d\n",*(&val));
	pthread_exit(50);
//eturn 50;
	
}
/*int *fun1(void)
{
	pid_t pid;
	pthread_t tid2;
	printf("i am in function 1 :\n");
	a = a+20;
	printf("tgid  fun =%d\n",getpid());
	printf("pid of fun  = %d\n",(unsigned int)(syscall(SYS_gettid)));
	getpid();
	pid = vfork();
	if(pid > 0){
		printf(" i am in parent process pid = %d\n",getpid());
	printf("pid of parent  = %d\n",(unsigned int)(syscall(SYS_gettid)));
//	a = a+30;
		}
	else if(pid == 0){
		printf(" i am in child process pid = %d\n",getpid());
	printf("pid of child  = %d\n",(unsigned int)(syscall(SYS_gettid)));
	a = a+30;
//	exit(0);
//	printf("in child a = %d\n",a);
	}
	pthread_exit(20);
}*/

int main(void)
{
	pthread_t tid;
	int status;
	int ptr;
	printf("process pid = %d\n",getpid());
	status = pthread_create(&tid,NULL,fun,NULL);
	pthread_join(tid,&ptr);
//	status = pthread_create(&tid,NULL,fun,NULL);
//	pthread_exit(NULL);
//	sched_yield();
//	getchar();
//	printf("value of a = %d\n",a);
//	pthread_exit(NULL);
	printf("ptr = %d\n",*(&ptr));
//	pthread_exit(NULL);
//	getchar();
	
}
