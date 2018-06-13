#include<stdio.h>
#include<fcntl.h>
#include<mqueue.h>
#include<stdlib.h>
#include<string.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<time.h>
int main(void)
{
	struct timespec timeval;
	struct mq_attr object;
	mqd_t fd;
	char buf[8192];
	int prio;
//	printf("enter the priority :\n");
//	scanf("%d",&prio);
	fd = mq_open("/mesg",O_RDWR|O_CREAT,0777,NULL);
	if(fd == -1){
		printf("fail in mq_open:\n");	
		return 0;
	}
	if(mq_receive(fd,buf,8192,&prio) == -1){
		printf("fail in opening in mq_receive:\n");
		return 0;
		}
	buf[strlen(buf)+1] = '\0';
	printf("buf msg = %s\n",buf);
	printf("priority = %d\n",prio);

}
