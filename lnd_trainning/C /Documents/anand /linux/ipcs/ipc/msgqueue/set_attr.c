#include<stdio.h>
#include<fcntl.h>
#include<mqueue.h>
#include<stdlib.h>
#include<string.h>
#include<sys/stat.h>
#include<sys/types.h>
int main(int argc,char **argv)
{
	struct timespec timeval;
	struct mq_attr object;
	mqd_t fd;
	int prio;
	if( argc != 3){
		printf("command line arguments need name and message:\n");
		return 0;
	}
	printf("***************default attributes*************\n");
	object.mq_maxmsg = 5;
	object.mq_msgsize = 5;
	printf("enter the priority :");
	scanf("%d",&prio);
	fd = mq_open(argv[1],O_RDWR|O_CREAT,0777,&object);
	if(fd == -1){
		printf("failure in mq_open :\n");
		return 0;
	}
	printf("fd = %d\n",fd);
	timeval.tv_sec = time(NULL)+5;
    timeval.tv_nsec = 0;
	if(mq_timedsend(fd,argv[2],strlen(argv[2]),prio,&timeval) == -1 ){
		printf("fail to send:\n");
		return 0;
	}

}
