/* 6. Write the following functions
a. unsigned int left_rotate_bits (unsigned int num);
	which will return the number, resulted by left rotating the number numb. unsigned int right_rotate_bits (unsigned int num);
	which will return the number, resulted by right rotating the number num
c. unsigned int left_rotate_n_bits (unsigned int num, int n);
	which will return the number, resulted by left rotating the number num by n bits
d. unsigned int right_rotate_n_bits (unsigned int num, int n);
	which will return the number, resulted by right rotating the number num by n bits  */


#include<stdio.h>
#include<stdlib.h>
#define BUF 512

void display(int );
char *remove_n(char *);
char *my_fgets(char *);
int my_atoi(char *);
char *input_validation(char *);
int num_validation(int );
int left_rotate_bits (unsigned int );
int left_rotate_nbits (unsigned int ,int );
int right_rotate_bits (unsigned int );
int right_rotate_nbits (unsigned int ,int );

int main(void)
{
		int num,num1,num2,num3,n;
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
		
		num1 = num2 = num3 = num;	
		printf("before \n");
		display(num);  
		num = left_rotate_bits(num);
		printf("After left rotate\n");
		display(num);
		printf("\n");
	
		printf("After right rotate\n");
		num1 = right_rotate_bits(num1);
		display(num1);
		printf("\n");

		while(1) {
			printf("enter n bits to rotate left\n");
			str = my_fgets(str);
			str = remove_n(str);
				if(input_validation(str) == 0) {
					printf("wrong input\n");
					continue;
				}	
				else
					break;
		}  
		n = my_atoi(str);
		printf("After left rotate n bits\n");
		num3 = left_rotate_nbits(num3, n);
		display(num3);
		
		while(1) {
			printf("enter n bits to rotate right\n");
			str = my_fgets(str);
			str = remove_n(str);
				if(input_validation(str) == 0) {
					printf("wrong input\n");
					continue;
				}	
				else
					break;
		}  
		n = my_atoi(str);
		printf("After right rotate n bits\n");
		num3 = right_rotate_nbits(num3, n);
		display(num3);
		return 0;
}

int left_rotate_bits (unsigned int num)
{
	int i,k = 0;
	int n = num;
		while(k != n) {
			i = (num >> 31) & 1;
			num = (num << 1) | i;
			k++;
		}
	return num;
}

int left_rotate_nbits (unsigned int num, int n)
{
  	 int i,k = 0;
        while(k != n) {
            i = (num >> 31) & 1;
            num = (num << 1) | i;
            k++;
        }
    return num;
}

int right_rotate_bits (unsigned int num)
{
    int i,k = 0;
    int n = num;
        while(k != n) {
            i = (num & 1) << 31;
            num = (num >> 1) | i;
            k++;
        }
    return num;
}

int right_rotate_nbits (unsigned int num,int n)
{
    int i,k = 0;
        while(k != n) {
            i = (num & 1) << 31;
            num = (num >> 1) | i;
            k++;
        }
    return num;
}

