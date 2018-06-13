/*5. Write a macro to test and set a bit position in a number.
a. #define bit_ts (num, pos)  */

#include<stdio.h>
#include<stdlib.h>
#define BUF 512

void display(int num);
char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);
char *input_validation(char *target);
int num_validation(int num);

#define bit_ts(num, pos) { (num >> pos) & 1 ? printf("bit is set\n") : printf("bit is not set\n"); \
							if(!((num >> pos) & 1)) \
							num = num | (1 << pos); \
							display(num);  \
						 }
int main(void)
{
		int num,pos;
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
                printf("enter the pos\n");
                str = my_fgets(str);
                str = remove_n(str);
                if(input_validation(str) == 0) {
                    printf("wrong input\n");
                    continue;
                }
                else
                    break;
            }
            pos = my_atoi(str);
            if(!num_validation(num)) {
                printf("wrong input\n");
                continue;
            }
            else
                break;
        }
		printf("before \n");
		display(num);  
		bit_ts(num, pos);

		return 0;
}

