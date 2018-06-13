#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<signal.h>

void my_sigpipe(int num)
{
	printf("sigpipe signal generated\n");
	
}

int main(void)
{
	char str[20];
	int fd;
//	signal(SIGPIPE, my_sigpipe);

	mkfifo("file", 0644);
	perror("mkfifo");

	fd = open("file", O_WRONLY | O_NONBLOCK);
//	perror("open");

	printf("enter data for client1 \n");
	//scanf("%[^\n]s", str);
	scanf("%s", str);
	write(fd, str, sizeof(str));
//	perror("write");
	printf("server : my work completed\n");
//	sleep(3);
	return 0;
}

