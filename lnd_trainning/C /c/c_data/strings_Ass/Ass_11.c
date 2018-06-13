/*11. WAP to reverse a given string.  */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUF 512

char *input_validation(char *);
char *remove_n(char *);
char *my_fgets(char *op);

char *str_pali(char *str1)
{
	int i=0, j, k;
	char *str2;
	char temp;

	str2 = str1;
	i=strlen(str1);	
	
	for(j = 0, k = i-1; j <= k; j++, k--) {
		temp = *(str2+j);
		*(str2+j) = *(str2+k);
		*(str2+k) = temp; 
	}
		return str2;
}
				
int main(void)
{
	char *str1 = NULL;

	if(NULL == (str1 = (char *)malloc(sizeof(char) * BUF))) {
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
		else {
			str1 = str_pali(str1);
			printf("%s\n",str1);
		}
		break;
	}
	return 0;
}
