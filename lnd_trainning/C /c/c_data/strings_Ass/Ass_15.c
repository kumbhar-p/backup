/*  15. Given a string str, write a function char * insertchar (char *str, const char ch, int pos) which
will insert a char ch in the given string str at a specified position pos. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUF 512

char *input_validation(char *);
char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);

char *insert_char(char *str, char ch, int pos)
{
	int i = 1;
	int l;
	l = strlen(str);

	while(*(str + i)) {
		if(i == pos){
			while(l != pos) {
				*(str + l + 1) = *(str + l);
				l--;
			}
				*(str + l + 1) = *(str + l);
				*(str + l) = ch;
				break;
			
		}
		else
			i++;
		
	}
	return str;
}

int main(void)
{
	char *str = NULL;
	char *str1 = NULL;
	char ch;
	int pos;

	if(NULL == (str1 = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	if(NULL == (str = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	while(1) {
		printf("enter the string\n");
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
		printf("enter ch : ");
		ch = getchar();
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
			break;
		else {
			printf("wrong input\n");
			continue;
		}
	}
	
//	while(1) {	
		printf("enter pos : ");
/*		str1 = my_fgets(str1);
		str1 = remove_n(str1);
		if(input_validation(str1) == 0) {
			printf("wrong input\n");
			continue;
		}
		else 
			break;
	}
			pos = my_atoi(str1);*/
			scanf("%d",&pos);
			printf("%s\n", insert_char(str, ch, pos));
	//	break;
	
		
	return 0;
}
