#include<stdio.h>
#include<sys/mman.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<stdlib.h>
int x = 100;
int *addr;
int main(void)
{
	int fd;
	int trunct;
	void *colect_vir;
	int pid ;
	int *ptr;
	addr = &x;
		
	
//	fd = open("anand.c",O_RDWR|O_CREAT,0777);    // its opening the shared memory object //
	fd =shm_open("/shmm",O_RDWR|O_CREAT,0777);    // its opening the shared memory object //
	if(fd == -1){
		printf("fail to open shared memory object:\n");
		exit(0);
	}
//	getchar();
	trunct = ftruncate(fd,4000);               // here truncate doing fixing the size of an object size //
	if(trunct == -1){
		printf("error in ftruncate:\n");
		exit(0);
	}
 // here it maps the physical frame physical address with the virtual address current process //
	colect_vir = mmap(NULL,15000,PROT_READ|PROT_WRITE,MAP_SHARED,fd,(off_t)0);
		printf("mmap return address = %p\n",colect_vir);
	if(colect_vir == MAP_FAILED){
		printf("fail in mmap:\n");
		exit(0);
	}
	printf("pid = %d\n",getpid());
//	getchar();
	pid = fork();
	if(pid > 0){
		printf("parent process :\n");
		wait(NULL);
		printf("collect content = %d\n",*((int *)colect_vir+1000));
	}
	else{
		printf("child writing into shared memory :\n");
		ptr = (int *)colect_vir;
		*(ptr+1000) = 2000;
		exit(0);
		}
//	shm_unlink("/shmm");

}
	
