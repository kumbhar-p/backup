#include<stdio.h>
#include<stdlib.h>
#include<sys/mman.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>

int main(void)
{
	int fd;
	int str[80];
//	struct stat attr;
	int i = 0;
	char *addr = NULL;
	fd = shm_open("/shm", O_RDONLY, 0666);
	if(fd == -1) {
		printf("shm_open failed\n");
		exit(0);
	}
	addr = mmap(NULL,80, PROT_READ, MAP_SHARED, fd, 0);
	perror("mmap");
		
	memcpy(str, addr, 80);

	printf("msg : %s\n", str);

	printf("Yes, i got message sucessfully\n");
	return 0;

}

