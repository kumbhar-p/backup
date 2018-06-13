/* 12. WAP to squeeze the consecutive similar characters in a given string.  */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUF 512

char *input_validation(char *);
char *remove_n(char *);
char *my_fgets(char *op);

char* remov_repetated_char(char *str1)
{
	int i, j;
	int c_check = 0;
	char ch;

	if(str1 == NULL)
	return 0;
		
	while(str1[c_check]) {
		ch = str1[c_check];
		i = j = c_check + 1;
		
		while(str1[i]) {
			if(str1[i] != ch) {
				str1[j] = str1[i];
				j++;
			}
			i++;
		}
		str1[j] = '\0';
		c_check++;
	}

	return str1;

}
				
int main(void)
{
	char *str1 = NULL;
	char *cat;

	if(NULL == (str1 = (char *)malloc(sizeof(char) * BUF))) {
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
			cat = remov_repetated_char(str1);
			printf("%s\n",cat);
		}
		break;
	}
	return 0;
}
