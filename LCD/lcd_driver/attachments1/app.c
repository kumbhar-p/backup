#include <stdio.h>
#include<fcntl.h>


int main(){

    int fp = -1 ;
    int choice;
    char buf[20] = "WELCOME";

    fp = open("/dev/dummy",O_RDWR);
    if(fp == -1) { 
        printf("open failed");
	perror("");
     }
    write(fp, buf,strlen(buf));
    return 0;

}
