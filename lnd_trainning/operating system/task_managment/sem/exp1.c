
#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
	int a = 10;
	int shm_fd;
	int *map;

	shm_fd = shm_open("/exp", O_RDWR, 0660);

	ftruncate(shm_fd, 10);

	map = (int *)mmap(NULL, 10, PROT_WRITE | PROT_READ, MAP_SHARED, shm_fd, 0);	
	printf("map = %d\n", *map);

	printf("%d\n",getpid());
	
	getchar();

	return 0;
}
