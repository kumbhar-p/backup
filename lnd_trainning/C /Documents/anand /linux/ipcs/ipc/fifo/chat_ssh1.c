#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
int main(void)
{
	int fd1;	
	int fd2;	
	int pid;
	char buf[50];
	char buf1[50];
	fd1 = open("fifo1",O_RDWR);
	fd2 = open("fifo2",O_RDWR);
	pid = fork();
	while(1){
	if(pid > 0){
		printf("enter the message in parent of process2 :");
		fgets(buf1,50,stdin);
		write(fd2,buf1,50);
		}
	else if(pid == 0){
		read(fd1,buf,50);	
		printf("\nmsg recived from process1 :%s\n",buf);
	}
	}
}
		
