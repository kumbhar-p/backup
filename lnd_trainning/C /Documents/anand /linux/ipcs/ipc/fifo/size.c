#include<stdio.h>
#include<fcntl.h>
int main(void)
{
	int fd;
	char ch = 'a';
	int i = 0;
	fd = open("fifo1",O_RDWR,0777);
	while(1){
		if(write(fd,&ch,1) != -1)
		printf("i = %d\n",i++);
	}
}
		
