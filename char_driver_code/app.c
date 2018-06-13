#include<stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	int i = 0;
	char a[100] = "ravi";

	fd = open("/dev/ravichar", O_RDWR);

	if (fd < 0)

		perror("Unable to open the device ");

	else
	printf("File opened Sucessfully %d\n", fd);



	write(fd,a, 5);

	read(fd,a,5);

	printf("%s\n",a);

	ioctl(fd,getpid(),10);

	close(fd);

	return 0;
}
