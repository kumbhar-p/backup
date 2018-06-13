/* Exercise 4-13. Write a recursive version of the function reverse(s), which reverses the string s in place. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUF 512

char *my_fgets(char *);
char *reverse(char *str,int l,int r);

int main(void)
{
	char *str = NULL;
	int l;	
	if(NULL == (str = ((char *)malloc(sizeof(char) * BUF)))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	
	printf("enter the string\n");
	str = my_fgets(str);
	l = strlen(str);
	printf("%d\n",l);
	str = reverse(str, 0, l - 1);
	printf("reversed string is - %s\n",str);
	
	return 0;
}	

char *reverse(char *str,int l,int r)
{
	char temp;
	if(l >= r)
		return str;
	if(*(str + l) != *(str + r)) {
		temp = *(str + l);
		*(str + l) = *(str + r);	
		*(str + r) = temp;
	}
	
	printf("reversed string is - %s\n",str);
	reverse(str, l + 1, r - 1);

	return str;
}
