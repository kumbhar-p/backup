#include <stdio.h>
#include <pthread.h>
//#define _GNU_SOURCE

static int glob = 0;

static pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;

static void * threadFunc(void *arg)
{
    int loops = *((int *) arg);
    int loc, j, s;
	
	sleep(2);
//	pthread_mutex_t mtx = PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP;
   
	 for (j = 0; j <loops; j++)
    {
   		s = pthread_mutex_lock(&mtx);
		if (s != 0)
			perror("mutex lock error");

        loc = glob;
        loc++;
        glob = loc;
//      glob++;
//		threadFunc(&loops);
		s = pthread_mutex_unlock(&mtx);
		if (s != 0)
			perror("mutex unlock error");

    }
//	pthread_exit(NULL);
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

    s = pthread_join(t2,NULL);


    if (s != 0)
        perror("thread-2 join error");

	printf("hai\n");
    s = pthread_join(t1,NULL);

    if (s != 0)
        perror("thread-1 join error");

    printf("glob = %d\n",glob);


    return 0;
}

