#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/syscall.h>

int a;
void *thread_fun(void *p)
{
	printf ("thread was created and it was executing....\n");
	
	a += 45;

//	getchar ();

	printf("TGID = %d\n",getpid());//prints the pid of thread group leader

	//prints thread pid
	printf("Thread PID = %d\n",syscall(SYS_gettid));
	
	getchar();

	printf("Thread execution completed\n");

	return (void *)0;
}


int main (void)
{
	int status;
	pthread_t th_id;

	a = 10;
	
	status = pthread_create (&th_id, NULL, thread_fun, NULL);

	if (status != 0 )
	{
		perror("thread creation error");

//		printf("Thread creation failed: %s",strerror(status));
	}
	
	printf("before thread a = %d\n",a);

	getchar();
	
	printf("PID of main process is = %d\n",getpid());
	printf("after thread process a = %d\n",a);
	
	pthread_exit(NULL);

	printf("if i use pthread_exit it won't execute statments after it\n");

	return 0;
}

