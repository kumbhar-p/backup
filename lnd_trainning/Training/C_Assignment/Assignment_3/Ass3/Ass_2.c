#include<stdio.h>
#include<stdlib.h>
#define BUF 512
char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);
char *input_validation(char *target);
void bin_to_odh(int ,int );

int main(void)
{
		long int num;
		int ch;
		char *op;

		if(NULL == (op = (char *)malloc(sizeof(char) * BUF))) {
				perror("malloc failed");
				exit(EXIT_FAILURE);
		}


		printf("enter the binary number\n");
		op = my_fgets(op);
		op = remove_n(op);
		input_validation(op);
		num = my_atoi(op);

		printf("enter ch\n1.octal 2.decimal 3.Hex\n");
		op = my_fgets(op);
		op = remove_n(op);
		ch = my_atoi(op);
		bin_to_odh(num, ch);

	return 0;
}

void bin_to_odh(int num, int ch) 
{
		long int rem,hex = 0,j = 1;
		while(num) {
				rem = num % 10;
				hex = hex + rem * j;
				j = j * 2;
				num = num / 10 ;
		}

		if(ch == 1)
				printf("In octal = %lo\n",hex);
		else if(ch == 2)
				printf("%ld\n",hex);
		else if(ch == 3)
				printf("%lx\n",hex);
		else
				printf("Wrong input\n");

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


