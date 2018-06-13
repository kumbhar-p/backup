#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<mqueue.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	mqd_t fd;
	char buf[512];
	struct mq_attr attr;
	unsigned int pri;
	
	if((fd = mq_open("/mq",O_RDONLY, 0666, NULL)) == -1) {
		perror("mq_open failed");
		exit(0);
	}

	mq_getattr(fd, &attr);
	perror("mq_getattr");
	printf("waiting for msg\n");
	if(mq_receive(fd, buf, attr.mq_msgsize, &pri) == -1) {
		perror("mq_receive failed");
		exit(0);
	}

	printf("ourput : %s\n", buf);

	return 0;
} 
