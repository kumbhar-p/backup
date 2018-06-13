#include <stdio.h>
#include <pthread.h>

static int glob = 0;

static void * threadFunc(void *arg)
{
	int loops = *((int *) arg);
	int loc, j;
	glob = 0;
	for (j = 0; j < loops; j++)
	{
/*		loc = glob;
		loc++;
		glob = loc;*/

		glob++;
	}	

		printf("j = %d\t glob = %d\t",j,glob);
	
	return NULL;

}


int main (int argc, char *argv[])
{
	pthread_t t1, t2;
	int loops, s;

	loops = (argc >1) ? atoi(argv[1]) : 1000000;

	s = pthread_create (&t1, NULL, threadFunc, &loops);
	
	if (s != 0)
		perror("thread-1 creation error");

	
	s = pthread_create (&t2, NULL, threadFunc, &loops);

	
	if (s != 0)
		perror("thread-2 creation error");
	
	s = pthread_join(t1,NULL);

	
	if (s != 0)
		perror("thread-1 join error");

	s = pthread_join(t2,NULL);

	
	if (s != 0)
		perror("thread-2 join error");

	printf("glob = %d\n",glob);

	return 0;
}
