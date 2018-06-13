/* 1. Write a program to create a thread and print pid of both thread group leader and the thread
using getpid() in the respective contexts. */

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<pthread.h>
#include<sys/syscall.h>

void *thread_fun();

int main(void)
{
	int status;
	pthread_t th_id;
	
	status = pthread_create(&th_id, NULL, thread_fun, NULL);
	if(status != 0) {
		printf("thread failed : %d\n", status);
	}
	
	printf("In main tgid : %d\n",getpid());
	printf("in main pid : %ld\n",syscall(SYS_gettid));
	
	getchar();
	pthread_exit(NULL);	
	return 0;
}

void *thread_fun()
{
	printf("i am in thread function\n");
	printf("in fun tgid : %d\n",getpid());
	printf("in fun pid : %ld\n",syscall(SYS_gettid));

	return NULL;
}

