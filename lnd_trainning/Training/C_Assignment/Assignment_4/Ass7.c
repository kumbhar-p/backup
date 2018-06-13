/* 7. Write the following functions which will count the number of bits set and number of bits cleared
in the given number num respectively
a. count_bit_set (int num);
b. count_bit_clear (int num);     */

#include<stdio.h>
#include<stdlib.h>
#define BUF 512

void display(int );
char *remove_n(char *);
char *my_fgets(char *);
int my_atoi(char *);
char *input_validation(char *);
int num_validation(int );
int count_bit_set(int );
int count_bit_clear(int );

int main(void)
{
		int num,num1,c = 0;
		char *str = NULL;

		if(NULL == (str = (char *)malloc(sizeof(char) * BUF))) {
				perror("malloc failed");
				exit(EXIT_FAILURE);
		}
		
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
		
		num1 = num;	
		printf("before \n");
		display(num);  
		c = count_bit_set(num);
		printf("set bits : %d \n",c);
	
		c = count_bit_clear(num1);
		printf("clear bits : %d \n",c);
		
		return 0;
}

int count_bit_set (int num)
{
    int i,c = 0;
		for(i = 31; i >= 0; i--) {
            if((num >> i) & 1)
			c++; 
        }
    return c;
}

int count_bit_clear(int num)
{
    int i,c = 0;
        for(i = 31; i >= 0; i--) {
            if(!((num >> i) & 1))
            c++;
        }
    return c;
}

