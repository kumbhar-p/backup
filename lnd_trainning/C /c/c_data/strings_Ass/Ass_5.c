/*4. Given 2 strings str1 and str2, write a function char * sappend (char *str1, char *str2) to append string str1
to string str2.  */

#include<stdio.h>
#include<stdlib.h>

#define BUF 512

char *input_validation(char *);
char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);

char* sappend(char *str1 , const char *str2,int n)
{
	int i=0;

	while(*str1){
		str1++;
		i++;}
		
		while(n--)
		{
			*str1 = *str2;
			str1++;
			str2++;
			i++;
		}
		return str1-i;				
}

int main(void)
{
	char *str1 = NULL;
	char *str2 = NULL;
	char *cat = NULL;
	int n;

	if(NULL == (cat = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
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

	while(1) {
		printf("enter the n\n");
		cat = my_fgets(cat);
		cat = remove_n(cat);
		if(input_validation(cat) == 0) {
			printf("wrong input\n");
			continue;
		}
		else 
		n = my_atoi(cat);
		cat = sappend(str1,str2,n);
		printf("%s\n",cat);	
		break;
	}
	return 0;
}
