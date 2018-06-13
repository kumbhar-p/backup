#include<stdio.h>
#include<stdlib.h>

#define BUF 512

char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);
char *input_validation(char *target);
int hex_to_dec(char *, int );
int hex_to_oct(char *, int );
int hex_to_bin(char *, int );

int main(void)
{
		int i = 0;
		int ch;
		char *op;
		//char *res1;
		int res;
		char hex[20];

		if(NULL == (op = (char *)malloc(sizeof(char) * BUF))) {
				perror("malloc failed");
				exit(EXIT_FAILURE);
		}


		printf("enter the hex number\n");
		
		while((ch = getchar()) != '\n') {
			if((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
				hex[i] = ch;
			i++;
		}
	/*	printf("enter ch\n1.octal 2.decimal 3.binary\n");
		op = my_fgets(op);
		op = remove_n(op);
		ch1 = my_atoi(op); */
		printf("hex to dec\n");
		res = hex_to_dec(hex, i);
		printf("%d\n",res);
		printf("hex to oct\n");
		hex_to_oct(hex, i);
		printf("hex to bin\n");
		hex_to_bin(hex, i);
		
	return 0;
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
