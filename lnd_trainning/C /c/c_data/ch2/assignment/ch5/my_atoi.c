#include<stdio.h>
#define BUF 512
#include<stdlib.h>

char* remove_n(char *target);

char *my_fgets(char *op)
{
        if(NULL == (fgets(op, BUF, stdin))) {
                perror("fgets failed");
                exit(EXIT_FAILURE);
        }
	op = remove_n(op);
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

char* remove_n(char *target)
{
    int i;
    for(i = 0 ; i < BUF ; i++){
        if(*target == '\n'){
            *target = '\0';
            break;}
        target++;}
    return  target-i;
}
    
