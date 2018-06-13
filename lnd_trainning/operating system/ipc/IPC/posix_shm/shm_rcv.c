#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include <sys/mman.h>
#include <sys/stat.h>        /* For mode constants */
#include <fcntl.h>           /* For O_* constants */
int main(void)
{
	int fd;
	char *addr = NULL;
	struct stat sb;
	char str[100];
	fd = shm_open("/shm", O_RDONLY, 0666);
	perror("shm_open");

	printf("fd : %d\n", fd);

	if (fstat(fd, &sb) == -1)
	perror("fstat");

	addr = 	mmap(NULL, sb.st_size+1, PROT_READ, MAP_SHARED, fd, 0);
	perror("mmap");

	memcpy(str, addr, sb.st_size+1);

	printf("msg : %s\n", str);

	return 0;
}



