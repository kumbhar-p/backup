/*  3. Given 2 parameters
i. a string in a buffer buf.
ii. a character 'c'
write a function char * chr_add_instr (char *buf, char c) that returns the address of the first
occurrence of character 'c' in the given string buf. */

#include<stdio.h>
#include<stdlib.h>

#define BUF 512

char *input_validation(char *);
char *remove_n(char *);
char *my_fgets(char *op);

char *chr_add_instr(char *target , char ch)
{
	int i=0;
	while(*target != ch)
	{
		target++;
		i++;
	}
	return target;
		
}

int main(void)
{
	char *buf = NULL;
	char *cat = NULL;
	char ch;
	
	if(NULL == (buf = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	if(NULL == (cat = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	while(1) {
		printf("enter the string\n");
		buf = my_fgets(buf); 

		buf = remove_n(buf);
		if(input_validation(buf) == 0) {
			printf("wrong input\n");
			continue;
		}
		else {
			printf("enter ch \n");
			ch = getchar();

			cat = chr_add_instr(buf,ch);
			printf("%p\n",cat);
		}	
		break;
	}
	return 0;
}
