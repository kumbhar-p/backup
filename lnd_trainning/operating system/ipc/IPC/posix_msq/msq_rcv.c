#include<stdio.h>
#include<stdlib.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <mqueue.h>
#include<unistd.h>
#include<string.h>


int main(void)
{

	mqd_t fd;
	struct mq_attr attr;
	char *str1 = NULL;
	char *str = NULL;
    int ret;
	unsigned int prio;
    struct sigevent sevp;		
	if((fd = mq_open("/mq1",O_CREAT | O_RDWR )) == -1) {
		perror("mq_open");
		exit(0);
	}

	printf("fd : %d\n", fd);

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

	printf("enter reply message\n");

	 if(NULL == (str1 = (char *) malloc(sizeof(char) * 512))) {
        perror("malloc failed");
        exit(0);
    }

    if(NULL == fgets(str1, sizeof(str1), stdin) ) {
        perror("fgets failed");
        exit(0);
    }


	if( (mq_send(fd, str1, attr.mq_msgsize, 0) ) == -1) {

        perror("mq_send");
        exit(0);
    }

   
    /* e     ret = mq_notify(fd,&sevp);
       printf("ret - %d\n",ret); printf("ret - %d\n",ret);
*/
	
//	mq_unlink("/mq1");

	return 0;
}
