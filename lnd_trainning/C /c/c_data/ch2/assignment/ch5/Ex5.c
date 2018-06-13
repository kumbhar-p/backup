#include<stdio_ext.h>
#include<stdlib.h>

#define BUF 512

char *input_validation(char *);
char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);
char* my_strncat(char *target , const char *source, int n);
int *strncmp(char *str1, char *str2, int n);

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
	int c;
	char ch;
	
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

	printf("enter the ch\n 1. strncpy\n 2. strncat\n 3. strncmp\n");
	ch = getchar();
	__fpurge(stdin);
//	while(1) {
		printf("enter the string1\n");
			source = my_fgets(source);
			source = remove_n(source);
//		if(input_validation(source) == 0) {
//			printf("wrong input\n");
//			continue;
//		}		
		printf("enter the string2\n");
			source = my_fgets(source);
			source = remove_n(source);
/*			if(input_validation(source) == 0) {
				printf("wrong input\n");
				continue;
			}
		
		
		 {*/
			printf("enter n value\n");
			str = my_fgets(str);
			str = remove_n(str);
			n = my_atoi(str);
			switch(ch) {
				case '1' :
					cat = my_strncpy(target,source,n);
					printf("%s\n",cat);	
					break;
				case '2' :
					cat = my_strncat(target,source,n);
					printf("%s\n",cat);	
					break;
				case '3' :
					c= my_strncmp(target,source,n);
					if(!c)
						printf("Two strings are equal\n");
					else if(c > 0)	
						printf("str1 is greater than str2\n");
		  			else 
						printf("str1 is less than str2 \n");
					break;
				default :break;
			}
//		}
//		break;
//	}
	return 0;
}

char* my_strncat(char *target , const char *source, int n)
{
	int i=0;

	while(*target){
		target++;
		i++;}
		
		while(n--)
		{
			*target = *source;
			target++;
			source++;
			i++;
		}
		*target = *source;
		return target-i;				
}

int my_strncmp(char *str1, char *str2, int n)
{
	while(n--) {
		str1++;
		str2++;
		if(*str1 != *str2)
			break;
	}

		if(*str1 == *str2)
			return 0;
		else if(*str1 < *str2)
			return -1;
		else return 1;	 
}

