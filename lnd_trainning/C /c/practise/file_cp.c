#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main(int argc, char **argv)
{
	int fs;
	int fd;
//	int i =10;
	char buf[100]; 
	fs = open(argv[1],O_RDONLY);
	fd = open(argv[2],O_WRONLY | O_CREAT | O_TRUNC);
/*	if(fd < 0) {
		perror("open");
		return ;
	}
*/
	read(fs, buf, sizeof(buf));
	write(fd, buf, strlen(buf));
	close(fs);
	close(fd);
	return 0;
}
