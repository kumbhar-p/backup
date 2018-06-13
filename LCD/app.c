#include <stdio.h>
#include<string.h>

int main(){

    FILE* fp;
    int choice;
    char buf[20] = "WELCOME";

    fp = fopen("/dev/dummy","r+");
    if(fp == NULL) { 
        printf("fopen failed");
     }
    fputs(buf, fp);
    return 0;

}
