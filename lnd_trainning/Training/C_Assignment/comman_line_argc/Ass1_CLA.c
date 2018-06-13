/* 1. Write a program to count number of  files in a folder by reading the files from the command
line  */


#include<stdio.h>

int main(int argc, char **argv)
{
    if(argc <= 1) {
        printf("usage:/a.out *\n");
    }

    printf("argc = %d\n",argc - 1);

    return 0;
}

