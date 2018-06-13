
#include<stdio.h>
#include<stdlib.h>

#define BUF 512

char *input_validation(char *);
char *remove_n(char *);

int my_strlen(char *p)
{
	int len = 0;

	while(*p++)
		len++;
	return len;	
}
int main(void)
{
	char *target = NULL;
	int len;
	if(NULL == (target = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	printf("enter the string\n");
	if(NULL == (fgets(target, BUF, stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}

	target = remove_n(target);
	target = input_validation(target);
	len = my_strlen(target);
	printf("%d\n",len);	
	return 0;
}
