#include<stdio.h>
#include<mqueue.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<time.h>
#include<error.h>
int main(void)
{
	mqd_t fd;
	char buf[8100897];
	struct timespec time1;
	time1.tv_sec = time(NULL)+5;
	fd = mq_open("/aaa",O_WRONLY|O_CREAT,0777,NULL);
	printf("enter the message :");
	fgets(buf,81,stdin);
//	sleep(1);
//	printf("ret = %d\n",mq_send(fd,buf,81,12));
    printf("ret = %d\n",mq_timedsend(fd,buf,81,4,&time1));
	mq_unlink("/aaa");
}

