/* 9. Write macros for the following using bitwise operations:
a. To find maximum and minimum of 2 numbers
b. To clear right most set bit in a number
c. To clear left most set bit in a number
d. To set right most cleared bit in a number
e. To set left most cleared bit in a number
f. To set bits from bit position ‘s’ to bit position ‘d’ in a given number and clear rest of the bits
g. To clear bits from bit position ‘s’ to bit position ‘d’ in a given number and set rest of the bits
h. To toggle bits from bit position ‘s’ to bit position ‘d’ in a given number */

#include<stdio.h>
#include<stdlib.h>
#define BUF 512

void display(int );
char *remove_n(char *);
char *my_fgets(char *);
int my_atoi(char *);
char *input_validation(char *);
int num_validation(int );

#define FIND_MIN(num1, num2)  ((num1 - num2) >> 31) ? printf("num1 is less\n") : printf("num2 is less\n")

#define FIND_MAX(num1, num2)  ((num1 - num2) >> 31) ? printf("num2 is greater\n") : printf("num1 is greater\n")
								
#define CLR_RIGHT_SET_BIT(num1) num1 & (num1 - 1)

#define CLR_LEFT_SET_BIT(num1, i) (num1 >> i) & 1

#define SET_RIGHT_CLR_BIT(num1) num1 | (num1 + 1)

#define SET_LEFT_CLR_BIT(num1, i) (num1 >> i) & 1 

#define SET_S_TO_D_BIT(num1, s, d) ( ~((~0) << ((d - s) + 1))) << s

#define CLR_S_TO_D_BIT(num1, s, d)  ( ~(( ~((~0) << ((d - s) + 1))) << s) )
								 

int main(void)
{
		int num2,num1,ch,i,s,d;
		char *str = NULL;

		if(NULL == (str = (char *)malloc(sizeof(char) * BUF))) {
				perror("malloc failed");
				exit(EXIT_FAILURE);
		}
		
	    while(1) {
			printf("enter your choice\n1. Find the max & min of\n2. clear right most set bit\n3. clear left most set bit\n");
			printf("4. set right most clr bit\n5. set left most clr bit\n3. set bits from pos s to d\n");
            str = my_fgets(str);
            str = remove_n(str);
            if(input_validation(str) == 0) {
            	printf("wrong input\n");
                continue;
            }
            else
                break;
            }
        ch = my_atoi(str);

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
		num1 = my_atoi(str);

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
        num2 =  my_atoi(str);
		
		switch(ch) {
			case 1 :
				FIND_MAX(num1, num2);
				FIND_MIN(num1, num2);
				break;
			case 2 :
				display(num1);
				num1 = CLR_RIGHT_SET_BIT(num1);   
				display(num1);
				break;
			case 3 :
				for(i = 31; i >= 0; i--) {
					if(!(CLR_LEFT_SET_BIT(num1, i)))
						continue;
					else {
						num1 = num1 & ~(1 << i);
						break;
					}
				}
				display(num1);
				break;
		    case 4 :	
				num1 = SET_RIGHT_CLR_BIT(num1);
				display(num1);
				break;
			case 5 :
				for(i = 31; i >= 0; i--) {
					if(SET_LEFT_CLR_BIT(num1, i))
						continue;
					else {
						num1 = num1 | (1 << i);
						break;
					}
				}
				display(num1);
				break;
			case 6 :
				printf("enter s & d\n");
				scanf("%d %d",&s,&d);
				num1 = SET_S_TO_D_BIT(num1, s, d);
				display(num1);
				break;
			case 7 :
				printf("enter s & d\n");
				scanf("%d %d",&s,&d);
				num1 = CLR_S_TO_D_BIT(num1, s, d);
				display(num1);
				break;

			default :
				break;
		}	
		return 0;
}


