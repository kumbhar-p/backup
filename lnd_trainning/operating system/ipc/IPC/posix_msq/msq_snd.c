#include<stdio.h>
#include<stdlib.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <mqueue.h>
#include<unistd.h>


int main(void)
{

	mqd_t fd;
	struct mq_attr attr;
	unsigned int prio;

	char *str = NULL;
	char *str1 = NULL;

		
	if((fd = mq_open("/mq1", O_RDWR | O_CREAT ,0666, NULL)) == -1) {
		perror("mq_open");
		exit(0);
	}

	printf("fd : %d\n", fd);
	
	

	if(NULL == (str1 = (char *) malloc(sizeof(char) * 512))) {
		perror("malloc failed");
		exit(0);
	}

	
	printf("enter message\n");
	if(NULL == fgets(str1, 512, stdin) ) {
		perror("fgets failed");
		exit(0);
	}

	if( (mq_send(fd, str1, sizeof(str1), 0) ) == -1) {

		perror("mq_send");
		exit(0);
	}
	
//	sleep(5);	
	if( (mq_getattr(fd, &attr) ) == -1) {
		perror("mq_getattr");
		exit(0);
	}
	
	if(NULL == (str = malloc(attr.mq_maxmsg))) {
        perror("malloc failed");
        exit(0);
    }



	if( (mq_receive(fd, str, attr.mq_msgsize, &prio) ) == -1) {

        perror("mq_receive");
        exit(0);
    }

    printf("message : %s\n", str);


	
//	mq_unlink("/mq1");
	return 0;
}
