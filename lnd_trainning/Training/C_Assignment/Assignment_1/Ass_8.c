/* 8. Given 2 strings in a character buffer buf1 & buf2. Write a function size_t strspn(const char *buf1,
const char *buf2) to count the initial set of characters in buf1, which matches any of the
characters in buf2. It stops when a character in buf1 not found in buf2. */

#include<stdio.h>
#include<stdlib.h>

#define BUF 512

char *input_validation(char *);
char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);

int strspn(const char *str1 ,const char *str2)
{
	int c=0;
	
	
		while(*str1 == *str2){
			str1++;
			str2++;
			c++;
		}
	
	

	return c;
}

int main(void)
{
	char *str1 = NULL;
	char *str2 = NULL;
	int count;

	if(NULL == (str1 = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	if(NULL == (str2 = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	while(1) {
		printf("enter the string1\n");
		str1 = my_fgets(str1);
		str1 = remove_n(str1);
		if(input_validation(str1) == 0) {
			printf("wrong input\n");
			continue;
		}
		else
			break;
	}

	while(1) {
		printf("enter the string2\n");
		str2 = my_fgets(str2);
		str2 = remove_n(str2);
		if(input_validation(str2) == 0) {
			printf("wrong input\n");
			continue;
		}
		else {
			count = strspn(str1,str2);
			printf("%d\n",count);	
		}
		break;
	}
	return 0;
}
