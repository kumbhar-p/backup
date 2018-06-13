/*  1. Given a string “Global Edge” in a character buffer sbuf, write a function void strcpy (char *dbuf, char
*sbuf) to copy the string from sbuf to character buffer dbuf.  */

#include<stdio.h>
#include<stdlib.h>

#define BUF 512

char *input_validation(char *);
char *remove_n(char *);

char* my_strcpy(char *target , const char *source)
{
	int i=0;
	while(*source)
	{
		*target = *source;
		target++;
		source++;
		i++;
	}
	*target = *source;
	return target-i;	
}

int main(void)
{
	char *target = NULL;
	char *source = NULL;
	char *cat;
	
	if(NULL == (target = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	if(NULL == (source = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	while(1) {
		printf("enter the string2\n");
		if(NULL == (fgets(source, BUF, stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		} 

		source = remove_n(source);
		if(input_validation(source) == 0) {
			printf("Wrong input\n");
			continue;
		}
		else {
		cat = my_strcpy(target,source);
		printf("%s\n",cat);	
		}
		break;
	}	
	return 0;
}
