#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	unsigned int status;
	status = open("data1",O_RDWR);
	if(status < 0) {
		perror("open failed");
			exit(1);
	}
return 0;
}
