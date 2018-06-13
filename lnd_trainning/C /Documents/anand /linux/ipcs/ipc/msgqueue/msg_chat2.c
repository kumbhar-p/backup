#include<stdio.h>
#include<mqueue.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char **argv)
{
	pid_t pid;
	int fd;
	char buf[30];
	char buf1[30];
	int prio = 10;
	if(argc != 2){
		printf("fail in command line arguments :\n");
		exit(0);
	}
	fd = mq_open(argv[1],O_RDWR|O_CREAT,0777,NULL);
	if(fd == -1){	
		printf("fail to open :\n");
		exit(0);
	}
	pid = fork();
	while(1){
	if(pid > 0){
		printf("enter the message from process1:");
		if(fgets(buf,20,stdin) == NULL){
			printf("fail in fgets :\n");
			exit (0);
		}
		if(mq_send(fd,buf,strlen(buf),5) == -1){
			printf("sending failure :\n");
			exit(0);
		}
		usleep(1);
	}
	else if(pid == 0){
		if(mq_receive(fd,buf1,8192,&prio) == -1){
			printf("fail in receiving :\n");
			exit(0);
		}
		printf("received msg :%s\n",buf1);
		usleep(1);
	}
	}	
}	


