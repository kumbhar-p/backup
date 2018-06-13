#include <stdio.h>
#include <pthread.h>

int t_status;

void *thread_function(void *p)
{
	printf("PID of thread is = %d\n",getpid());
	printf("Im in thread..\n");

	t_status = 245;

//	return &t_status;
	pthread_exit(&t_status);
}
	

int main (void)
{
	int status;
	pthread_t th_id;
	int *retval;

//	retval = malloc (sizeof (int));

	status = pthread_create (&th_id,NULL,thread_function,NULL);

//	status = pthread_create (&th_id,detach,threda_function,NULL);

	if (status != 0)
	{
		printf("Thread creation failed: %s \n",strerror(status));
	}

//	pthread_detach(th_id);

	status = pthread_join (th_id, (void **)&retval);
	if (status != 0)
	{
		printf("Thread join fail: %s \n",strerror(status));
	}

	printf("Value of *retval = %d \n", *retval);

	pthreda_exit(NULL);

	return 0;
}
