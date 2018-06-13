#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(void)
{
	char str[20];
	char s[20];
	int fd;
	int fd1;
/*	mkfifo("f", 0666);
	perror("mkfifo");

	mkfifo("f1", 0666);
	perror("mkfifo");
*/	
	fd = open("f2", O_WRONLY);
	printf("enter data for client1 \n");
	scanf("%[^\n]s", str);
	write(fd, str, sizeof(str));
/*
	fd1 = open("f1", O_WRONLY);
	printf("enter data for client2\n");
	scanf(" %[^\n]s", s);
	write(fd1, s, sizeof(s));
*/	

	
	printf("server : my work completed\n");	
	return 0;
}

