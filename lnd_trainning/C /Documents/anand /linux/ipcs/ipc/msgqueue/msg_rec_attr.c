#include<stdio.h>
#include<mqueue.h>
#include<fcntl.h>
int main(void)
{
	mqd_t fd;
	int prio = 10;
	int i = 0;
	char buf[8192];
	fd = mq_open("/aaa",O_RDWR,0777,NULL);
	while(1){
	printf("ret = %d\n",	mq_receive(fd,buf,8192,&prio));
	printf("recived msg = %s\n",buf);
	i++;
	}
	mq_unlink("/aaa");
}

