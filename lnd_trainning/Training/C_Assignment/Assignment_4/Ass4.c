/*4. Write the following functions which will toggle even bits and odd bits respectively in a given
number
a. Toggle even bit: int even_bit_toggle (int num);
b. Toggle odd bit: int odd_bit_toggle (int num);  */


#include<stdio.h>
#include<stdlib.h>
#define BUF 512

int even_bit_toggle(int );
int odd_bit_toggle(int );
void display(int num);
char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);
char *input_validation(char *target);
int num_validation(int num);

int main(void)
{
		int num,num1;
		char *str = NULL;

		if(NULL == (str = (char *)malloc(sizeof(char) * BUF))) {
				perror("malloc failed");
				exit(EXIT_FAILURE);
		}
		while(1) {
			while(1) {
				printf("enter the num1\n");
				str = my_fgets(str);
				str = remove_n(str);
				if(input_validation(str) == 0) {
					printf("wrong input\n");
					continue;
				}	
				else
					break;
			}  
			num = my_atoi(str);
			if(!num_validation(num)) {
				printf("wrong input\n");
				continue;
			}
			else
				break;
		}
		num1 = num;
		printf("Before toggle\n");
		display(num);
		printf("After toggle even\n");
		num = even_bit_toggle(num);
		display(num);

		printf("Before toggle\n");
		display(num1);
		printf("After toggle odd \n");
		num1 = odd_bit_toggle(num1);
		display(num1);

		return 0;
}

int even_bit_toggle(int num)
{
	num = num ^ 0xAA;

		return num;
}

int odd_bit_toggle(int num)
{
	num = num ^ 0x55;

		return num;
}
