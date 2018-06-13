#include<stdio.h>
#include<mqueue.h>
#include<fcntl.h>
int main(void)
{
	mqd_t fd;
	int prio = 10;
	
	char buf[8192];
	fd = mq_open("/aaa",O_RDWR,0777,NULL);
	if(fd == -1){
		printf("failure in mq_open\n");
	}
	if(mq_receive(fd,buf,8192,&prio) == -1){
		printf("failure in mq_receive:\n");
	}
	printf("recived msg = %s\n",buf);
}

