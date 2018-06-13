#include<stdio.h>
#include<sys/mman.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<stdlib.h>
int main(void)
{
	int fd;
	int trunct;
	void *colect_vir;
	int pid ;
	int *ptr;
	
//	fd = open("/dev/shm/shmm",O_RDWR|O_CREAT,0777);    // its opening the shared memory object //
	fd =shm_open("/shmm",O_RDWR|O_CREAT,0777);    // its opening the shared memory object //
	if(fd == -1){
		printf("fail to open shared memory object:\n");
		exit(0);
	}
	trunct = ftruncate(fd,65596);               // here truncate doing fixing the size of an object size //
	if(trunct == -1){
		printf("error in ftruncate:\n");
		exit(0);
	}
 	/* here it maps the physical frame physical address  with the virtual address current process
	   PROT_WRITE & PROT_READ represent the accessing permissions for the mapped region
	   MAP_PRIVATE represents contents written into mapped region only that process can read not possible to read to other process.*/
//	colect_vir = mmap(NULL,65596,PROT_READ|PROT_WRITE,MAP_PRIVATE,fd,(off_t)0);
	colect_vir = mmap(NULL,65596,PROT_READ|PROT_WRITE,MAP_SHARED,fd,(off_t)0);
	if(colect_vir == MAP_FAILED){
		printf("fail in mmap:\n");
		exit(0);
	}
	pid = fork();
	if(pid > 0){
		printf("parent process :\n");
		wait(NULL);
		printf("collect content = %d\n",*((int *)colect_vir));
	}
	else{
		printf("child writing into shared memory :\n");
		ptr = (int *)colect_vir;
		*ptr = 2000;
		printf("collect content child = %d\n",*((int *)colect_vir));
		exit(0);
		}
	shm_unlink("/shmm");
		
	
}
	
