#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str1[10] = {0};
	int shm_fd;
	int *shm_map;
	printf("clint execution started...\n");


	if((shm_fd = shm_open("/shm_mem", O_RDWR, 0660)) == -1)
	{
		perror("shm_open");
	}

	printf("shm_object opened in recv.\n");

	if(ftruncate(shm_fd, 2*sizeof(int)) == -1)
	{
		perror("ftruncate");
	}
	printf("shm_truncated in recv\n");

	if((shm_map = (int *)mmap(NULL, 2*sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0)) == MAP_FAILED)
		perror("mmap");

	printf("address in receiver %p\n",shm_map);
	read(shm_fd, str1, 10);
	printf("readed data in recv is:%s\n",str1);
	
	memset(str1,0,10);
	
	read(shm_fd, str1, 10);
	printf("readed data in recv is:%s\n",str1);

	printf("mapped and readed in shm_recv object\n");
	if(munmap(NULL, 2*sizeof(int)) == -1)
		perror("munmap");


	if(shm_unlink("/shm_mem") == -1)
		perror("shm_unlink");

	getchar();

	printf("recv excution completed.\n");
	return 0;
}
