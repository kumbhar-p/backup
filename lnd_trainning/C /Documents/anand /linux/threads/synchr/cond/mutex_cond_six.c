#include<stdio.h>
#include<pthread.h>
pthread_mutex_t lock;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int val = 0;
void  *fun1(void *ptr)
{
	printf("in fun1:\n");
	int i = 0;
	for(i = 0; i <= 10 ;i++){
	pthread_mutex_lock(&lock);
	while(val != 0)
		pthread_cond_wait(&cond,&lock);
		printf("i = %d\n",i);
		pthread_cond_broadcast(&cond);
		val++;
	pthread_mutex_unlock(&lock);
	}
}
void  *fun2(void *ptr)
{
	printf("in fun2:\n");
	int j = 0;
	for(j = 0; j <= 10 ;j++){
	pthread_mutex_lock(&lock);
	while(val != 1)
		pthread_cond_wait(&cond,&lock);
		printf("j = %d\n",j);
		pthread_cond_broadcast(&cond);
		val++;
	pthread_mutex_unlock(&lock);
	}
}
void  *fun3(void *ptr)
{
	printf("in fun3:\n");
	int k = 0;
	for(k = 0; k <= 10 ;k++){
	pthread_mutex_lock(&lock);
	while(val != 2)
		pthread_cond_wait(&cond,&lock);
		printf("k = %d\n",k);
		pthread_cond_broadcast(&cond);
	    val++;
	pthread_mutex_unlock(&lock);
	}
}
void  *fun4(void *ptr)
{
	printf("in fun4:\n");
	int l = 0;
	for(l = 0; l <= 10 ;l++){
	pthread_mutex_lock(&lock);
	while(val != 3)
		pthread_cond_wait(&cond,&lock);
		printf("l = %d\n",l);
		pthread_cond_broadcast(&cond);
	    val++;
	pthread_mutex_unlock(&lock);
	}
}
void  *fun5(void *ptr)
{
	printf("in fun5:\n");
	int m = 0;
	for(m = 0; m <= 10 ;m++){
	pthread_mutex_lock(&lock);
	while(val != 4)
		pthread_cond_wait(&cond,&lock);
		printf("m = %d\n",m);
		pthread_cond_broadcast(&cond);
		val++;
	pthread_mutex_unlock(&lock);
	}
}
void  *fun6(void *ptr)
{
	printf("in fun6:\n");
	int n = 0;
	for(n = 0; n <= 10 ;n++){
	pthread_mutex_lock(&lock);
	while(val != 5)
		pthread_cond_wait(&cond,&lock);
		printf("n = %d\n",n);
		pthread_cond_broadcast(&cond);
		val = val-5;
	pthread_mutex_unlock(&lock);
	}
}
int main(void)
{
	pthread_t thid1;
	pthread_t thid2;
	pthread_t thid3;
	pthread_t thid4;
	pthread_t thid5;
	pthread_t thid6;
	int status;
	
	thid1 = pthread_create(&thid1,NULL,fun1,NULL);
	thid2 = pthread_create(&thid2,NULL,fun2,NULL);
	thid3 = pthread_create(&thid3,NULL,fun3,NULL);
	thid4 = pthread_create(&thid4,NULL,fun4,NULL);
	thid5 = pthread_create(&thid5,NULL,fun5,NULL);
	thid6 = pthread_create(&thid6,NULL,fun6,NULL);

	pthread_exit(NULL);
}
	
