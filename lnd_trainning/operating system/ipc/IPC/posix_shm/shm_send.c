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

	if (fstat(fd, &sb) == (int)-1);
    perror("fstat");

	ftruncate(fd, 10);
	perror("ftruncate");
	

	addr = 	mmap(NULL, 10, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
	perror("mmap");
	printf("enter message\n");
	scanf("%[^\n]s", addr);


/*	munmap(NULL, sb.st_size);
	perror("munmap");

	shm_unlink("/shm");
	perror("shm_unlink");	
*/
	return 0;
}







 
