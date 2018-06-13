#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)
{
	char str[20];
	int fd;
	mkfifo("f", 0666);
	perror("mkfifo");
	
	fd = open("f", O_RDONLY | O_NONBLOCK);
	
	read(fd, str, sizeof(str));
	printf("%s\n", str);

	printf("client : my work completed\n");	
	return 0;
}

