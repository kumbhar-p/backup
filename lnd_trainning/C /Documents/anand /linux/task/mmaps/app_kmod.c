#include <stdio.h>
#include <fcntl.h>
int num = 100;
int main ()
{
    int fd;
    int var;
    fd = open ("/dev/mychar", O_RDWR|O_CREAT);
    ioctl(fd, &num, &var);
    if (fd < 0)
        perror ("Unable to open the device\n");
    else 
        printf ("File opened Successfully %d\n", fd);

    close (fd);

    return 0;	
}
