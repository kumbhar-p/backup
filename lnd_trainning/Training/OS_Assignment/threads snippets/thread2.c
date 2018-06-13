//here gettid operation is pending
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<pthread.h>
#include<sys/syscall.h>
void *thread_fun()
{
	printf("i am in thread function\n");
	printf("in fun pid : %d\n",getpid());
	printf("in fun tid : %d\n",syscall(gettid()));
	//getchar();
	return NULL;
}

int main(void)
{
	int status;
	pthread_t th_id;
	
	status = pthread_create(&th_id, NULL, thread_fun, NULL);
	if(status != 0) {
		printf("thread failed : %d\n", status);
	}
	
	printf("in MAIN pid : %d\n",getpid());
	//printf("in MAIN tid : %d\n",gettid());
	
	getchar();
	pthread_exit(NULL);	
	return 0;
}

