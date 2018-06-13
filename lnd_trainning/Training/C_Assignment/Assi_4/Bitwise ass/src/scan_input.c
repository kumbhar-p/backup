/* scan input */
#include"header.h"

char *my_malloc()
{
 char *str = NULL;

        if(NULL == (str = (char *)malloc(sizeof(char) * BUF))) {
                perror("malloc failed");
                exit(EXIT_FAILURE);
        }
	return str;
}

int scan_input_num()
{
    char *str = NULL;
    int num;
	
	str = my_malloc();
    while(1) {
            while(1) {
                printf("enter the num        : ");
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
    return num;
}

int scan_s_pos()
{
	int s;
	char *str = NULL;

	str = my_malloc();
	while(1) {
			while(1) {
				printf("Enter s position     : ");
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
				if(s == 0 || s >= 32) {
					printf("wrong input\n");
					continue;
				}
				else
					break;
		}
	return s;
}

int scan_d_pos()
{
    int s;
    char *str = NULL;

	str = my_malloc();
    while(1) {
            while(1) {
                printf("Enter d position     : ");
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
                if(!s) {
                    printf("wrong input\n");
                    continue;
                }
                else
                    break;
    }
    return s;
}

int scan_n_bits()
{
    int n;
    char *str = NULL;

    str = my_malloc();
    while(1) {
            while(1) {
                printf("Enter n bits         : ");
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
                if(!n) {
                    printf("wrong input\n");
                    continue;
                }
                else
                    break;
    }
    return n;
}


int scan_choice()
{
    char *str = NULL;
    int ch;

    str = my_malloc();
    while(1) {
            while(1) {
                printf("\nenter the choice     : ");
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
            if(!num_validation(ch)) {
                printf("wrong input\n");
                continue;
            }
            else
                break;
        }
    return ch;
}
	
