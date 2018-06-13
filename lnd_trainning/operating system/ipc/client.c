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
	if(fork() == 0) {

			read(fd, s, sizeof(s));
			printf("data reading = %s\n",s);
		
	}
	else {
			scanf("%s",s);
			write(fd1, s, strlen(s) + 1);
		}
	}

	return 0;
}
	
