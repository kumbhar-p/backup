
#define _GNU_SOURCE
#include<stdio.h>
#include<pthread.h>
	pthread_mutex_t m1 =   PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP ;
//pthread_mutex_t m1 = PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP ;
//pthread_mutex_t m1 =PTHREAD_MUTEX_INITIALIZER ;
//pthread_mutex_t m1;
int val = 10;
int i = 0;
int j = 0;
void *fun(void *p)
{
	printf("i am function:\n");
	pthread_mutex_lock(&m1);
	while(i <= 10){
		printf("fun sleeping:\n");
		printf("i = %d\n",i);
//		getchar();
//		sleep(2);
		i++;
		}
	
	pthread_mutex_unlock(&m1);


}
void *fun1(void *p)
{
	printf("i am function one :\n");
    pthread_mutex_lock(&m1);
    while(j <= 10){
        printf("fun one sleeping:\n");
		printf("j = %d\n",j);
	//	getchar();
   //     sleep(2);
		j++;
        }
    pthread_mutex_unlock(&m1);

}

int main()
{
//	pthread_mutex_t m1 =PTHREAD_MUTEX_INITIALIZER ;
//	pthread_mutex_t m1 =PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP ;
	pthread_t th_id1,th_id2;
//	pthread_mutex_init(&m1,NULL);
	int status;
	status = pthread_create(&th_id1,NULL,fun,NULL);
//	sleep(1);
	status = pthread_create(&th_id2,NULL,fun1,NULL);
	pthread_exit(NULL);

}
	
