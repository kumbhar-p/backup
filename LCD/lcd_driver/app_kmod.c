#include<stdio.h>
#include<fcntl.h>
#include<sys/ioctl.h>

int main()
{
	int fd;
	struct 	file *fp;
	int pid=getpid();
	int a;


	fd= open("/dev/dummy", O_RDWR);
printf("pid=%d\n",getpid());
	if(fd <0)
		perror("Unable to open the device");
	else
		printf("File opened successfully %d \n",fd);
//	a=ioctl(fd,pid,0);
//		getchar();
   

	close(fd);

	return 0;
}
