#include <stdio.h>
#include <fcntl.h>

int main ()
{
    int fd;
    unsigned int x;
    int y;
    int pid;
    pid = getpid();
    fd	= open ("/dev/mychar",O_RDWR);
    ioctl(fd, pid, &y);
    if (fd < 0)
        perror ("Unable to open the device\n");
    else 
        printf ("File opened Successfully %d\n", fd);

    close (fd);

    return 0;	
}
