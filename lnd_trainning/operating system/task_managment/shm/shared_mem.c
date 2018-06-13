#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(void)
{
	int shm_fd;
	char *str = "arunkumar";
	char str1[10] = {0};
//	pid_t pid;
	int *shm_map;	
//	if((pid = fork()) > 0)
//	{
		printf("Parent started execution....\n");
		
		if((shm_fd = shm_open("/shm_mem", O_CREAT | O_EXCL | O_RDWR, 0660)) == -1)
		{
			perror("shm_open");
		}
		
		printf("shm_object opened in sender.\n");

		if(ftruncate(shm_fd, 2*sizeof(int)) == -1)
		{
			perror("ftruncate");
		}
		printf("shm_truncated in sender\n");

		if((shm_map = (int *)mmap(NULL, 2*sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0)) == MAP_FAILED)
		{	
			perror("mmap");
			exit(1);
		}
		printf("address in sender %p\n",shm_map);
		write(shm_fd, str, 10);
		
		printf("mapped and writted in shm_sender object\n");

		if(munmap(NULL, 2*sizeof(int)) == -1)
			perror("munmap");
		


//		wait(NULL);
		
		getchar();
		printf("sender execution completed.\n");
//	}

/*	else if( pid == 0)
	{	
		printf("child execution started...\n");


		if((shm_fd = shm_open("/shm_mem", O_RDWR, 0660)) == -1)
		{
			perror("shm_open");
		}

		printf("shm_object opened in child.\n");
		
		if(ftruncate(shm_fd, 2*sizeof(int)) == -1)
		{
			perror("ftruncate");
		}
		printf("shm_truncated in child\n");

		if(mmap(NULL, 2*sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0) == MAP_FAILED)
			perror("mmap");


		read(shm_fd, str1, 10);
	
		printf("mapped and readed in shm_chuild object\n");
		
		if(shm_unlink("/shm_mem") == -1)
			perror("shm_unlink");

		printf("readed data is:%s\n",str1);

		printf("child excution completed.\n");
	}
	
	else
		printf("Fork failed\n");*/

	return 0;
}

