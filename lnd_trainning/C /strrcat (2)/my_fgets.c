#include"header.h"
char *my_fgets(char *str)
{
	if(NULL == (str =(char *) malloc(sizeof(char) * 512))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	if(NULL == (fgets(str, 512, stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
	str[strlen(str) - 1] = '\0';
	
	return str;
}

