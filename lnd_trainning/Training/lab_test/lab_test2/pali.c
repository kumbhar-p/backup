#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUF 512

int is_pali(char *s, int l, int r);
char *remove_n(char *str);

int main(void)
{
	char *str = NULL;
	int right ,i;
	
	if(NULL == (str = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc falied");
		exit(EXIT_FAILURE);
	}

	up:
		printf("enter the string\n");
		if(NULL == fgets(str, BUF,stdin)) {
			perror("fgets falied");
			exit(EXIT_FAILURE);
		}

		str = remove_n(str);
	
		for(i = 0; *(str + i) != '\0'; i++) {
        	if((*(str + i) >= 'a' && *(str + i) <= 'z') || (*(str + i) >= 'A' && *(str + i) <= 'Z'))
            	continue;
        	else {
				printf("wrong input\n");
				goto up;
			}
		}	
   
		right = strlen(str);
	
		if(is_pali(str, 0, right - 1))
			printf("palindrome\n");
		else
			printf("Not palindrome\n");

return 0;
}

int is_pali(char *s, int l, int r)
{
	int flag;
	if(l > r)
		flag = 1;
	else if(*(s + l) == *(s + r))
		is_pali(s, l + 1, r - 1);
	else
		flag = 0;

	return flag;
}

char *remove_n(char *str)
{
	int i;
	for(i = 0; *(str + i) != '\0'; i++) {
		if(*(str + i) == '\n')
			*(str + i) = '\0';
	}
return str;
}
