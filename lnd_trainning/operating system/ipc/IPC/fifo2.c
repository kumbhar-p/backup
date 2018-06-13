#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)
{
	char str[20];
	int fd1;
	mkfifo("f2", 0666);
	perror("mkfifo");
	
	fd1 = open("f2", O_RDONLY);
	
	read(fd1, str, sizeof(str));
	printf("%s\n", str);

	printf("client : my work completed\n");	
	return 0;
}

