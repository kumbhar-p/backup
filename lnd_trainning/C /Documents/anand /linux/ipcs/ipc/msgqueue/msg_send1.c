#include<stdio.h>
#include<fcntl.h>
#include<mqueue.h>
#include<stdlib.h>
#include<string.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<errno.h>
int main(void)
{
	int status;
	struct timespec timeval;
	struct mq_attr object;
	mqd_t fd;
	int prio;
	char buf[30];
	printf("enter the priority :");
	scanf("%d",&prio);
	fflush(stdin);
	printf("enter message :");
	scanf("%s",buf);
	fd = mq_open("/mesg",O_RDWR|O_CREAT,0777,NULL);
	if(fd == -1){
		printf("fail to open:\n");
		exit(0);
	}
	printf("fd = %d\n",fd);
	if(-1 == (status =mq_send(fd,buf,30,prio))){
		perror("mq send");
		exit(0);
	}
	return 0;
}
