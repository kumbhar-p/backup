#include<stdio.h>
#include<stdlib.h>
#include<sys/mman.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>

int main(void)
{
	int fd;
	int str[20];
//	struct stat attr;
	int i = 0;
	char *addr = NULL;
	fd = shm_open("/shm", O_RDWR | O_CREAT, 0666);
	if(fd == -1) {
		printf("shm_open failed\n");
		exit(0);
	}
	
	if(ftruncate(fd, 80) == -1) {
		printf("ftruncate failed\n");
		exit(0);
	}
	
	addr=mmap(NULL,80, PROT_WRITE | PROT_READ, MAP_SHARED, fd, 0);
 
	printf("enter data to send\n");
	scanf("%s", addr);
	
	printf("ready to take message, my work completed\n");
	return 0;

}

