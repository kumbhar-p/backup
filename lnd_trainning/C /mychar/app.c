#include<stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	char buf[10];

	fd = open("/dev/mychar", O_RDWR);

	if (fd < 0)
		perror("Unable to oprn the device ");
	else
	printf("File opened Sucessfully %d\n", fd);
	lseek(fd, 1, SEEK_SET);
	write(fd, &buf, 8);
	close(fd);

	return 0;
}
