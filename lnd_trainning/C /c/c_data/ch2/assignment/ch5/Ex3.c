/*Exercise 5-3. Write a pointer version of the function strcat that we showed in Chapter 2: strcat(s,t) copies the string t to the end of s.  */

#include<stdio.h>
#include<stdlib.h>

#define BUF 512

char *input_validation(char *);
char *remove_n(char *);

char* my_strcat(char *target , const char *source)
{
	int i=0;

	while(*target){
		target++;
		i++;}
		
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

	printf("enter the string1\n");
	if(NULL == (fgets(target, BUF, stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}

	target = remove_n(target);
	target = input_validation(target);

	printf("enter the string2\n");
	if(NULL == (fgets(source, BUF, stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	} 

	source = remove_n(source);
	source = input_validation(source);

	cat = my_strcat(target,source);
	printf("%s\n",cat);	
	return 0;
}
