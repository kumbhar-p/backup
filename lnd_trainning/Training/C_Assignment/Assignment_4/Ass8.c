/* 8. Write the following functions
a. int cnt_leading_set_bits (int num) returns the number of leading set bits

b. int cnt_leading_cleared_bits (int num) returns the number of leading cleared bits

c. int cnt_trailing_cleared_bits (int num) returns the number of trailing cleared bits

d. int cnt_trailing_set_bits (int num) returns the number of trailing set bits   */


#include<stdio.h>
#include<stdlib.h>
#define BUF 512

void display(int );
char *remove_n(char *);
char *my_fgets(char *);
int my_atoi(char *);
char *input_validation(char *);
int num_validation(int );
int cnt_leading_set_bits (int ); 
int cnt_leading_cleared_bits (int );
int cnt_trailing_cleared_bits (int );
int cnt_trailing_set_bits (int ); 

int main(void)
{
		int num,c = 0;
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
		
		printf("before \n");
		display(num);  
		c = cnt_leading_set_bits (num); 
		printf("leading set bits : %d \n",c);

		c = cnt_leading_cleared_bits (num); 
		printf("leading clear bits : %d \n",c);

		c = cnt_trailing_set_bits (num); 
		printf("trailing set bits : %d \n",c);

		c = cnt_trailing_cleared_bits (num);
		printf("trailing clear bits : %d \n",c);
		
		return 0;
}

int cnt_leading_set_bits (int num) 
{
    int i,c = 0;
		for(i = 31; i >= 0; i--) {
            if(!((num >> i) & 1))
				return c;
			else {
				c++;
        }
		return c;
}

int cnt_leading_cleared_bits (int num) 
{
    int i,c = 0;
		for(i = 31; i >= 0; i--) {
            if((num >> i) & 1)
				return c;
			else
				c++; 
        }
		return 0;
}

int cnt_trailing_set_bits (int num)
{
    int i,c = 0;
        for(i = 0; i <= 31; i++) {
            if(!((num >> i) & 1))
                return c;
            else
                c++;
        }
        return 0;
}
int cnt_trailing_cleared_bits (int num)
{
    int i,c = 0;
        for(i = 0; i <= 31; i++) {
            if((num >> i) & 1)
                return c;
            else
                c++;
        }
        return 0;
}

