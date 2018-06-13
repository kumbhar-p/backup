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
	int *ptr1;
	int i = 0;
	int j = 0;
	printf("getpid = %d\n",getpid());
	shm_unlink("/shma");
	fd = shm_open("/shma",O_RDWR|O_CREAT|O_EXCL|O_TRUNC,0777);    // its opening the shared memory object //
	if(fd == -1){
		printf("fail to open shared memory object:\n");
		exit(0);
	}
	trunct = ftruncate(fd,1024);               /* here truncate doing fixing the size of an object size */
	if(trunct == -1){
		printf("error in ftruncate:\n");
		exit(0);
	}
 // here it maps the physical frame physical address with the virtual address current process //
	colect_vir = mmap(NULL,1024,PROT_READ|PROT_WRITE,MAP_SHARED,fd,(off_t)0);
	if(colect_vir == MAP_FAILED){
		printf("fail in mmap:\n");
		exit(0);
	}
	printf("collect address = %p\n",(int *)colect_vir);
	ptr1 = (int *)colect_vir;
	pid = fork();
	if(pid > 0){
		printf("parent process :\n");
		usleep(20);
		while(j <= 2000){
		printf("parent j = %d\n",j);
	 	printf("parent = %d\n",*ptr1);
		ptr1++;
		j++;
			
		}
	}
	else{
		printf("child writing into shared memory :\n");
		ptr = (int *)colect_vir;
		while(i <= 2000){
		printf("child i = %d\n",i);
		//ptr = ptr + 100;
		*ptr = 2000;
		ptr++;
		i++;
//		exit(0);
		}
	}
	getchar();
	
	shm_unlink("/shma");
		
	
}
	
