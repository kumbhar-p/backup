#include<stdio.h>
#include<fcntl.h>
#include<mqueue.h>
#include<stdlib.h>
#include<string.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<time.h>
int main(int c,char **argv)
{
	struct timespec timeval;
	struct mq_attr object;
	mqd_t fd;
	char buf[20];
	int prio;
	printf("enter the priority :\n");
	scanf("%d",&prio);
	printf("***************default attributes*************\n");
	object.mq_maxmsg = 5;
	object.mq_msgsize = 5;
	fd = mq_open(argv[1],O_RDWR|O_CREAT,0777,&object);
	if(fd == -1){
		printf("error in mq_open:\n");
		return 0;
	}
	timeval.tv_sec = time(NULL)+5;
    timeval.tv_nsec = 0;
	if(mq_timedreceive(fd,buf,strlen(buf)+1,&prio,&timeval) == -1){
		printf("error in mq_timedrecive:\n");
		return 0;
	}
	printf("buf msg = %s\n",buf);

}
