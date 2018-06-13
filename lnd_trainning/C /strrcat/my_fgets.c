#include<stdio.h>

char *my_fgets(char *str)
{
	if(NULL == (str =(char *) malloc(sizeof(char) * 512))) {
		perror("malloc failed");
		exit(0);
	}
	if(NULL == (fgets(str, 512, stdin))) {
		perror("fgets failed");
		exit(0);
	}
	str[strlen(str) - 1] = '\0';
	
	return str;
}

