#include<stdio.h>
#include<math.h>
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

double my_atoi(char *op)
{
        int c = 0;
		int k = 0;
		int sign,flag;
		double d;

		if(*op == '-') {
			sign = -1;
			op++;
		}
		else
			sign = 1;

        while(*op) {
				if(*op == '.')
					flag = 1;
				else {
                	c = c*10 + *op - 48;
					if(flag == 1)
						k++;
				}
                op++;
        }
        d = sign * c / pow(10, k); 		
		
	return d;
}    
