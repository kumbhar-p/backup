#include<stdio.h>
#include<stdlib.h>

#define BUF 512

int is_pali(char *s, int l, int r);
char *remove_n(char *str);

int main(void)
{
	char *str = NULL;
	int right;
	
	if(NULL == (str = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc falied");
		exit(EXIT_FAILURE);
	}

	if(NULL = fgets(str, BUF,stdin)) {
		perror("fgets falied");
		exit(EXIT_FAILURE);
	}

	str = remove_n(str);
	right = strlen(str);
	
	if((is_pali(str, 0, right - 1))
		printf("Not palindrome\n");
	else
		printf("palindrome\n");
return 0;
}

int is_pali(char *s, int l, int r)
{
	if(l > r)
		return s;
	if(*(s + l) == *(str + r))
		is_pali(s, l + 1, r - 1);
	else
		return 0;
}

char *remove_n(char *str)
{
	int i;
	for(i = 0; *(str + i) != NULL; i++) {
		if(*(str + i) == '\n')
			*(str + i) = '\0';
	}
return str;
}
