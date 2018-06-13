#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
int main(void)
{
	int fd1;	
	int fd2;
	int fd3;
	int fd4;
	int pid;
	char buf1[50];
	char buf2[50];
	fd2 = open("fifo2",O_RDWR);
	fd3 = open("fifo3",O_RDWR);
	pid = fork();
	while(1){
	if(pid > 0){
		printf("enter the message in client2 :");
		fgets(buf2,50,stdin);
		write(fd3,buf2,50);
		}
	else if(pid == 0){
		read(fd2,buf1,50);	
		printf("\nmsg recived from client 1 :%s\n",buf1);
	}
	}
}
		
