/*2. Given a string “Global Edge” in a character buffer sbuf, write a function void strncpy(char *dbuf, char
*sbuf, int n) to copy n characters from character buffer sbuf to character buffer dbuf.  */


#include<stdio.h>
#include<stdlib.h>

#define BUF 512

char *input_validation(char *);
char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);

char *my_strncpy(char *target , const char *source , int n)
{
	int i=0;
	while(n--)
	{
		*target = *source;
		target++;
		source++;
		i++;
	}
	*target = '\0';
	return target-i;
		
}

int main(void)
{
	char *target = NULL;
	char *source = NULL;
	char *str = NULL;
	char *cat;
	int n;
	
	if(NULL == (str = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
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
			source = my_fgets(source);
			source = remove_n(source);
		if(input_validation(source) == 0) {
			printf("wrong input\n");
			continue;
		}
		else {
			printf("enter n value\n");
			str = my_fgets(str);
			str = remove_n(str);
			n = my_atoi(str);

			cat = my_strncpy(target,source,n);
			printf("%s\n",cat);	
		}
		break;
	}
	return 0;
}
