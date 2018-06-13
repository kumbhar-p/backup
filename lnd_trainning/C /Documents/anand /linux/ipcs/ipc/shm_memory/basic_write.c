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
	fd = shm_open("/shmm",O_RDWR|O_CREAT,0777);    // its opening the shared memory object //
	if(fd == -1){
		printf("fail to open shared memory object:\n");
		exit(0);
	}
	trunct = ftruncate(fd,65536);               // here truncate doing fixing the size of an object size //
	if(trunct == -1){
		printf("error in ftruncate:\n");
		exit(0);
	}
 // here it maps the physical frame physical address with the virtual address current process //
	colect_vir = mmap(NULL,65596,PROT_READ|PROT_WRITE,MAP_SHARED,fd,(off_t)0);
	if(colect_vir == MAP_FAILED){
		printf("fail in mmap:\n");
		exit(0);
	}
	
		printf("writing into shared memory object :\n");	
		ptr = (int *)colect_vir;
		*ptr = 3000;
		
	
}
	
