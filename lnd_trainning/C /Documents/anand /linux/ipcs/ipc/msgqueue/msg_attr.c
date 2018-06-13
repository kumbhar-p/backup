#include<stdio.h>
#include<mqueue.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<string.h>
int main(void)
{
	mqd_t fd;
	char buf[30];
	int i = 0;
	struct mq_attr object;
	struct mq_attr object1;
	object.mq_flags = O_NONBLOCK;
	object.mq_maxmsg = 10;
	object.mq_msgsize = 8195;
	object.mq_curmsgs = 10;
	fd = mq_open("/aaa7",O_WRONLY|O_CREAT,0777,&object);
//	fd = mq_open("/aaa1",O_WRONLY|O_CREAT,0777,NULL);
	
	mq_getattr(fd,&object1);
	printf("max no of messages = %ld\n",object1.mq_maxmsg);

	printf("max messages size = %ld\n",object1.mq_msgsize);
/*	printf("open ret = %d\n",fd);	
	printf("ret of set = %d\n",mq_setattr(fd,&object,NULL));
	while(1){
	printf("enter the message :\n");
	fgets(buf,400,stdin);
	printf("ret = %d\n",mq_send(fd,buf,30,12));
	i++;
	bzero(buf,30);
	}*/
}
