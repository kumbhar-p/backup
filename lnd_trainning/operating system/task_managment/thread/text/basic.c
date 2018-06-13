#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/syscall.h>

#if 0
int *func(void *p)
{	
	printf("thread executed\n");

	return 0;
}




int main (void)
{
	pthread_t th;
	int s;

	s = pthread_create(&th, NULL, func, NULL);
	
	if(s != 0)
	{
		perror("thread create");
		return 0;
	}
	
	pthread_exit(NULL);

	return 0;

}
#endif


#if 1
int main (void)
{
	char *s = "hello""world";

	printf("%s\n",s);

	return 0;
}
#endif
