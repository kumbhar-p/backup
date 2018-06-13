#include<stdio.h>
#include<stdlib.h>

char *my_fgets(char *);
char *ipvalid(char *);
char * strrcat(char *, char *);

int main(void)
{

	char *src = NULL;
	char *dest = NULL;
	char *res = NULL;
	
	printf("enter source string\n");
	src = my_fgets(src);
	src = ipvalid(src);

	printf("enter dest string\n");
	dest = my_fgets(dest);
	dest = ipvalid(dest);
	
	res = strrcat(src, dest);
	printf("output : %s\n", res);

	return 0;
}


char * strrcat(char *src, char *dest)
{

	int i = 0;
	int j = 0;
	i = strlen(src);
	j = strlen(dest);
	for(j =j - 1; j >= 0; i++, j--) {
 		*(src + i) = *(dest + j);
	}
	*(src + i) = '\0';

	return (src);
}
