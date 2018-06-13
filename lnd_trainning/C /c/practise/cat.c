#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main(int argc, char **argv)
{
	char ch;
	int fd;
	int r;
	char buf[100]; 
	
	fd = open(argv[1],O_RDONLY );
	
	while((r = read(fd, &ch, sizeof(char))) != 0){
		printf("%c",ch);
	}
	/*
	fd = open(argv[1], O_APPEND);
	
	while((r = read(fd, &ch, sizeof(char))) != 0){
		write(fd, &ch, sizeof(char));
	}*/
//	fprintf(stdout, buf, strlen(buf));
	return 0;
}
