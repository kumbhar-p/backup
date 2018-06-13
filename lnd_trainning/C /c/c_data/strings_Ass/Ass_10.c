/*  10. WAP to check whether the given string is palindrome or not.  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUF 512

char *input_validation(char *);
char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);

int str_pali(char *str1)
{
	int i=0, j, k;
	char *str2;
	char temp;

	str2 = str1;
	while(*str1){
		str1++;
		i++;
	}
	str1 = --str1;
	for(j = 0, k = i-1; j <= k; j++, k--) {	
		if(*(str2+j) != *(str2+k))
		break;
	}
	if(j<k)
		return 0;
	else 	
		return 1;				
}

int main(void)
{
	char *str1 = NULL;
	char *str2 = NULL;
	char *cat = NULL;
	int c;

	if(NULL == (cat = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
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
		else {
			cat = str1;	
			c = str_pali(str1);
			if(c)
				printf("string is palindrome\n");
			else
				printf("string are not palindrome\n");	
		}
		break;
	}
	
return 0;
}
