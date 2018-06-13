#include <stdio.h>
#include <pthread.h>
#include <sys/syscall.h>

int glob;
pthread_mutex_t mtx;
pthread_mutexattr_t mtxattr;

static void * threadFunc(void *arg)
{
    int loops = *((int *) arg);
    int loc, j, s;
	static int count;
//  pthread_mutex_t mtx = PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP;
		
        s = pthread_mutex_lock(&mtx);
        if (s != 0)
            perror("mutex lock error");
    for (j = 0; j <loops; j++)
    {

        /*loc = glob;
        loc++;
        glob = loc;*/
      glob++;


    }
        if(count < 10)
		{
			printf("thread at funcation call : %d\t value = %d\t",count++,loops);
	sleep(1);
			printf("global = %d\t",glob);
			printf("thredID =%d\n",syscall(SYS_gettid));
			threadFunc(&loops);
		}
//  pthread_exit(NULL);
        s = pthread_mutex_unlock(&mtx);
        if (s != 0)
            perror("mutex unlock error");
    
	return NULL;
}
int main (int argc, char *argv[])
{
    pthread_t t1, t2;
    int loops, s;
	
	s = pthread_mutexattr_init(&mtxattr);
	s = pthread_mutexattr_settype(&mtxattr,PTHREAD_MUTEX_RECURSIVE_NP);
	s = pthread_mutex_init(&mtx,&mtxattr);

	
    loops = (argc >1) ? atoi(argv[1]) : 1000000;

    s = pthread_create (&t1, NULL, threadFunc, &loops);

    if (s != 0)
        perror("thread-1 creation error");

    s = pthread_join(t1,NULL);
    if (s != 0)
        perror("thread-1 join error");

    s = pthread_create (&t2, NULL, threadFunc, &loops);
    if (s != 0)
        perror("thread-2 creation error");
	
    
	s = pthread_join(t2,NULL);
    if (s != 0)
        perror("thread-2 join error");


    printf("glob = %d\n",glob);

	if(pthread_mutexattr_destroy(&mtxattr) != 0)
		perror("mutex_attr_destroy");
	if(pthread_mutex_destroy(&mtx) != 0)	
		perror("pthread_destroy_init");

    return 0;
}
