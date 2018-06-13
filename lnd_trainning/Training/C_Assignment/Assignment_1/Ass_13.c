/* 13. Given 2 strings str and rstr, write a funtion int strrot(const char *str, const char *rstr) to check
whether rstr is a rotated string of str. */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUF 512

char *input_validation(char *);
char *remove_n(char *);
char *my_fgets(char *op);
char *my_atoi(char *op);

int my_strrot(char *str, char *rstr)
{
	char ch;
	int i = 0,j = 0,k = 0;
	int l,b;

	l = strlen(rstr);
	while(*(str + i) != *(rstr + j)) {
		k++;
		j++;
	}
	b = (l - 1);
	
		while(k) {
			ch = *(rstr + i);
			l = b;
			while(l--) {
				*(rstr + i) = *(rstr + i + 1);
				i++;
			}
			*(rstr + i) = ch;
			k--;
			i = 0;
		}
	if(!strcmp(str ,rstr))	
		return 1;
	else
		return 0;
	
}

int main(void)
{
	char *str = NULL;
	char *rstr = NULL;

	if(NULL == (str = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	if(NULL == (rstr = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	while(1) {
		printf("enter the string\n");
		str = my_fgets(str);
		str = remove_n(str);
		if(input_validation(str) == 0) {
			printf("wrong input\n");
			continue;
		}
		else
			break;
	}
	 while(1) {
        printf("enter the string\n");
        rstr = my_fgets(rstr);
        rstr = remove_n(rstr);
        if(input_validation(rstr) == 0) {
            printf("wrong input\n");
            continue;
        }
        else
            break;
    }
	if( my_strrot(str, rstr))
		printf("rotated string\n");
	else
		printf("not rotated string\n");
	
		
	return 0;
}
