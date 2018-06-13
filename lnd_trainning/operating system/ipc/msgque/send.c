#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<mqueue.h>
#include<stdlib.h>

int main(void)
{
	mqd_t fd;
	char buf[512];
	
	if((fd = mq_open("/mq", O_CREAT | O_WRONLY, 0666, NULL) )== -1) {
		perror("mq_open failed");
		exit(0);
	}

	printf("enter the message\n");
	if(NULL == fgets(buf, 512, stdin)) {
		perror("fgets failed");
		exit(0);
	}
	if(mq_send(fd, buf, sizeof(buf), 0) == -1) {
		perror("mq_send failed");
		exit(0);
	}

	return 0;
} 
