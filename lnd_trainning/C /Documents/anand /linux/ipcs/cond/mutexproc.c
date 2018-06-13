#include<stdio.h>
#include<pthread.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<mqueue.h>
#include<string.h>
pthread_mutex_t lock;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int val = 0;
void  *fun1(void *ptr)
{
	printf("in fun1:\n");
	mqd_t fd;
	char buf[100];
	fd = mq_open("/mesg",O_RDWR|O_CREAT,0777,NULL);
	pthread_mutex_lock(&lock);
	while(val != 0)
		pthread_cond_wait(&cond,&lock);
		printf("enter the message:\n");
		scanf("%s",buf);
		if(-1 == mq_send(fd,buf,100,0))
				printf("mq_send fail:\n");
		pthread_cond_signal(&cond);
		val--;
	pthread_mutex_unlock(&lock);
	return NULL;
}
void  *fun2(void *ptr)
{
	printf("in fun2:\n");
	mqd_t fd;
	char buf[100];
	fd = mq_open("/mesg",O_RDWR|O_CREAT,0777,NULL);
	pthread_mutex_unlock(&lock);
	pthread_mutex_lock(&lock);
	while(val != 0)
		pthread_cond_wait(&cond,&lock);
		if(-1 == mq_receive(fd,buf,8192,0))
				printf("mq_recv fail:\n");
		
		printf("the recieved message fun2:%s\n",buf);
		if(-1 == mq_send(fd,buf,100,0))
				printf("mq_send fail:\n");
		pthread_cond_signal(&cond);
		val++;
	pthread_mutex_unlock(&lock);
	return NULL;
}
void  *fun3(void *ptr)
{
	printf("in fun3:\n");
	mqd_t fd;
	char buf[100];
	fd = mq_open("/mesg",O_RDWR|O_CREAT,0777,NULL);
	pthread_mutex_unlock(&lock);
	pthread_mutex_lock(&lock);
	while(val != 0)
		pthread_cond_wait(&cond,&lock);
		if(-1 == mq_receive(fd,buf,8192,0))
				printf("mq_recv fail:\n");
		printf("the recieved message fun3:%s\n",buf);
		pthread_cond_signal(&cond);
		val++;
	pthread_mutex_unlock(&lock);
	return NULL;
}
int main(void)
{
	pthread_t thid1;
	pthread_t thid2;
	pthread_t thid3;
	int status;
	
	status = pthread_create(&thid1,NULL,fun1,NULL);
	status = pthread_create(&thid2,NULL,fun2,NULL);
	status = pthread_create(&thid3,NULL,fun3,NULL);

	pthread_exit(NULL);
}
	
