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

	fd = shm_open("/shm", O_RDWR | O_CREAT,0666);
	perror("shm_open");

	printf("fd : %d\n", fd);

	ftruncate(fd, 10);
	perror("ftruncate");
	
	if (fstat(fd, &sb) == (int)-1);
    perror("fstat");

	addr = 	mmap(NULL, 10, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
	perror("mmap");
	strcpy(addr,"hello");
//	while(1);
//	write(STDOUT_FILENO, addr, sb.st_size);
//	perror("write");

	return 0;
}







 
