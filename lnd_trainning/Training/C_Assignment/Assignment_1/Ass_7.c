/*7. Given 2 strings in a character buffer str1 & str2. Write a function int strcasecmp(char *str1, char
*str2) which compares two strings str1 and str2 by ignoring the case (lower or upper) and returns
the following.
i) 0 if two strings are equal
ii) 1 str1 is greater than str2
iii) -1 if str1 is less than str2  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUF 512

char *input_validation(char *);
char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);

int str_casecmp(char *str1, char *str2)
{
	while(*str1) {
		str1++;
		str2++;
		if(*str1 != *str2)
			break;
	}

		if(*str1 == *str2)
			return 0;
		else if(*str1 < *str2)
				return -1;
			 else return 1;	 
}

int main(void)
{
	char *str1 = NULL;
	char *str2 = NULL;
	int c;
	int i=0;

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
	
	while(*str1){
		if(*str1 >= 'a' && *str1 <= 'z')
		*str1 = *str1 ^ 32;
		str1++;
		i++;
	}
	str1 = str1 - i;

	while(1) {
		printf("enter the string2\n");
		str2 = my_fgets(str2);
		str2 = remove_n(str2);
		if(input_validation(str2) == 0) {
			printf("wrong input\n");
			continue;
		}
		else 
			break;
	}
	
	i = 0;	
	while(*str2){
		if(*str2 >= 'a' && *str2 <= 'z')
		*str2 = *str2 ^ 32;
		str2++;
		i++;
	}
	str2 = str2 -i;
	c = str_casecmp(str1, str2);
	
		if(!c)
			printf("Two strings are equal\n");
		else if(c > 0)	
				printf("str1 is greater than str2\n");
		     else 
				printf("str1 is less than str2 \n");
		
	return 0;
}
