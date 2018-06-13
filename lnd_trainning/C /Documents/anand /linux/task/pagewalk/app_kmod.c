#include <stdio.h>
#include <fcntl.h>
int var = 10;
int main (void)
{
	int fd;

	printf("before ioctl value of var = %d\n", var);
	
	fd = open ("/dev/mychar",O_RDWR);

	if (fd < 0)
		perror ("Unable to open the device\n");
	else 
		printf ("File opened Successfully %d\n", fd);

	ioctl(fd, getpid(), &var);

	printf("after ioctl value of var = %d\n", var);

	close (fd);

	return 0;	
}
