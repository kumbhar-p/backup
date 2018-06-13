#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/syscall.h>
int a = 20;
void *f1(void)
{
	a = a+20;
	printf("f1 thread tgid = %d\n",getpid());
    printf("f1 thread pid = %d\n",(unsigned int)(syscall(SYS_gettid)));
//	execlp("ls","ls",NULL);
	pthread_exit(0);
}
void *f2(void)
{
	a = a+20;
    printf("f2 thread tgid = %d\n",getpid());
    printf("f2 thread pid = %d\n",(unsigned int)(syscall(SYS_gettid)));
//  execlp("ls","ls",NULL);
    pthread_exit(0);
}


int main()
{
	pthread_t th_id,th_id1;
	int status,status1;
	int *k;
	status = pthread_create(&th_id,NULL,f1,NULL);
	pthread_join(th_id,&k);
	status1 = pthread_create(&th_id1,NULL,f2,NULL);
	printf("mthread pid = %d\n",getpid());
	printf("mthread tid = %d\n",(unsigned int)(syscall(SYS_gettid)));
	pthread_join(th_id1,&k);
	printf("a = %d\n",a);
}
