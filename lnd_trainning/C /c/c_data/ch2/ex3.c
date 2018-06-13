#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define BUF 512

char *remove_n(char *);
int hex_to_odb(char *, int );

int main(void)
{
		int i = 0;
		int ch;
		char *op;
		char hex[20];

		if(NULL == (op = (char *)malloc(sizeof(char) * BUF))) {
				perror("malloc failed");
				exit(EXIT_FAILURE);
		}

		printf("enter the hex number\n");

		while((ch = getchar()) != '\n') {
				if((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
						hex[i++] = ch;
				else { 
					printf("wrong input\n");
					return 0;
				}
		}
		i = hex_to_odb(hex, i);
			printf("%d\n",i);

			
		return 0;
}

int hex_to_odb(char *hex, int i)
{
		int j, result = 0;
		double k = 0;
		for(j = i-1; j >= 0; j--) {

				if(hex[j] >= 'a' && hex[j] <= 'z' )  
						hex[j] = hex[j] ^ 32;

				if(hex[j] >= 'A' && hex[j] <= 'Z' ) 
						result += (hex[j] - 55) * (int)pow((double)16, k);	

				else if(hex[j] >= '0' && hex[j] <= '9' ) 
						result += (hex[j] - 48) * (int)pow((double)16, k);	
				k++;
		}

		return result;
}



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
