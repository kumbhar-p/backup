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
	fd1 = open("fifo1",O_RDWR);
	fd2 = open("fifo2",O_RDWR);
	fd3 = open("fifo3",O_RDWR);
	fd4 = open("fifo4",O_RDWR);
	pid = fork();
	while(1){
	if(pid > 0){
		printf("enter the message in clent1 :");
		fgets(buf1,50,stdin);
		write(fd1,buf1,50);
		}
	else if(pid == 0){
		read(fd4,buf2,50);	
		printf("\nmsg recived from client2 :%s\n",buf2);
	}
	}
}
		
