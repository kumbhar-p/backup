/* 14. Given 2 strings str and sstr, write a function char *remsstr(char *str, const char *sstr), which
checks for the substring sstr in str and if found removes the substring sstr in string str and
returns the modified string str. If the substring sstr is not found, it returns the original string str.  */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUF 512

char *input_validation(char *);
char *remove_n(char *);
char *my_fgets(char *op);

char *remsstr(char *str, char *sstr)
{
	int i = 0,j = 0,l = 0;
	
	l = strlen(sstr);	
		
		while(*(str + i) != '\0') {
			while(*(str + i) == *(sstr + j) && *(sstr + j) != '\0') {
				i++;
				j++;
			}
				
				if(*(sstr + j) == '\0') {
					if(*(str + i) != 0) {
						while(*(str + i) != '\0') {
                  
						*(str + i - l) = *(str + i);
						i++;
						}
						*(str + (i-l)) = '\0';
					}
					else {
						*(str + (i-l)) = '\0';
						break;
					}
						
				}
					 
			i++;
			j = 0;
		}
	return str;
}

int main(void)
{
	char *str = NULL;
	char *sstr = NULL;
	
	if(NULL == (str = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	if(NULL == (sstr = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	
	while(1) {
		printf("enter the string1\n");
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
		printf("enter the string2\n");
		sstr = my_fgets(sstr);
		sstr = remove_n(sstr);
		if(input_validation(sstr) == 0) {
			printf("wrong input\n");
			continue;
		}
		else
			str = remsstr(str, sstr);
			printf("%s\n",str);
			break;
	}
	
	return 0;
}
