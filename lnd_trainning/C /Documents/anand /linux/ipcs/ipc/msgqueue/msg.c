#include<stdio.h>
#include<mqueue.h>
#include<fcntl.h>
#include<sys/stat.h>
int main(void)
{
	mqd_t fd;
	char buf[30];
	if(mq_open("/mq1",O_WRONLY|O_CREAT,0777,NULL) == -1){
		printf("not able to open mq_open:\n");
		return 0;
	}

	printf("enter the message :\n");
	fgets(buf,400,stdin);
	if(mq_send(fd,buf,30,12) == -1){
		printf("fail in mq_send:\n");
		return 0;
	}
}

