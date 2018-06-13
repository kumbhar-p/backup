#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	int fd;
	char *buf = "i am writing to my char dev";
	char rev[30] = {0};
        fd= open("/dev/char_dev", O_RDWR);

        if(fd <0)
                perror("Unable to open the device");
        else
                printf("File opened successfully %d \n",fd);
//	int fs = open("data", O_CREAT|O_RDWR, 0644);
	write(fd,buf,strlen(buf)+1);
/*	if(-1 == lseek(fd,0,SEEK_SET))
		perror("lseek failed\n");*/
//	read(fd,rev,sizeof(rev));
	printf("%s\n",rev);
//	close(fs);
        close(fd);

        return 0;
}

