#include<stdio.h>
#include<stdlib.h>
#define BUF 512

int bit_swap(int ,int ,int ,int );
void display(int num);
char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);
char *input_validation(char *target);
int num_validation(int num);

int main(void)
{
		int num,num1,s,d;
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

		while(1) {
			while(1) {
				printf("enter the num2\n");
				str = my_fgets(str);
				str = remove_n(str);
				if(input_validation(str) == 0) {
					printf("wrong input\n");
					continue;
				}	
				else
					break;
			}  
			num1 =  my_atoi(str);
			if(!num_validation(num)) {
				printf("wrong input\n");
				continue;
			}
				else
					break;
		}

		while(1) {
			printf("Enter src pos\n");
			str = my_fgets(str);
			str = remove_n(str);
			if(input_validation(str) == 0) {
				printf("wrong input\n");
				continue;
			}	
			else
				break;
		}  
		s = my_atoi(str);

		while(1) {
			printf("Enter desti pos\n");
			str = my_fgets(str);
			str = remove_n(str);
			if(input_validation(str) == 0) {
				printf("wrong input\n");
				continue;
			}	
			else
				break;
		}  
		d =  my_atoi(str);
		
		printf("Before swp\n");
		display(num);
		display(num1);
		printf("After swp \n");
		bit_swap(num, num1, s, d);

		return 0;
}
int bit_swap(int num,int num1,int s,int d)
{
		if(((num >> s) & 1) == ((num1>> d) & 1)){}

		else {
				num = num ^(1 << s);
				num1= num1^(1 << d);
		}
		display(num);
		display(num1);

		return 0;
}

