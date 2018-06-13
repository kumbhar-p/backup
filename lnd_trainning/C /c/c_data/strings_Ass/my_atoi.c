#include<stdio.h>
#define BUF 512
#include<stdlib.h>

char *my_fgets(char *op)
{
        if(NULL == (fgets(op, BUF, stdin))) {
                perror("fgets failed");
                exit(EXIT_FAILURE);
        }
        return op;
}

int my_atoi(char *op)
{
        int c = 0;

        while(*op) {
                c = c*10 + *op - 48;
                op++;
        }
        return c;
}    
