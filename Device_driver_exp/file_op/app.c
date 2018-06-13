#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	int fd;
	char *buf = "i am writing to my char dev";
	char rev[30] = {0};
        fd= open("/dev/etx_device", O_RDWR);

        if(fd <0)
                perror("Unable to open the device");
        else
                printf("File opened successfully %d \n",fd);
	write(fd,buf,strlen(buf)+1);
	printf("%s\n",rev);
        close(fd);

        return 0;
}

