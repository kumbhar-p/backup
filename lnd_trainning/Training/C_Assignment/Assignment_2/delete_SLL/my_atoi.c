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
		char ch;
		if(*op == '-') {
			ch = '-';
			op++;
		}

        while(*op) {
                c = c*10 + *op - 48;
                op++;
        }
		if(ch == '-') {
			c = -c;
			return c;
		}
		else
        	return c;
}    
