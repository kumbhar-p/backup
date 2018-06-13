#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(void) 
{
	char s[20];
	int fd, fd1;
	
	mkfifo("f1",0644);
	mkfifo("f2",0644);
	
	fd = open("f1", O_RDWR);
	fd1 = open("f2", O_RDWR);
 
	while(1)
	{
	if(fork()) {
			printf("enter messagr\n");
			scanf("%s",s);
			write(fd, s, strlen(s) + 1);
		}
	
	else {
			read(fd1, s, sizeof(s));
			//printf("reading message\n");
			printf("data reading = %s\n",s);
	}	}
	


	return 0;
}
	
