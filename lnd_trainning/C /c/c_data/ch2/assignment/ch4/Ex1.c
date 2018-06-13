/* Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost occurrence of t in s, or -1 if there is none.
   */

#include<stdio.h>
#include<stdlib.h>

#define BUF 512

int strrindex( char s[], char t );
char *my_fgets(char *);

int main(void)
{
	char *str = NULL;
	char ch;
	int i;

	if(NULL == (str = malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	printf("enter the string\n");
	str = my_fgets(str);
	printf("enter the ch\n");
	ch = getchar();
	printf("%s\n",str);
	i = strrindex(str,ch);
	printf("%d\n",i);

	return 0;
}

int strrindex( char *s, char t )
{
  int i;
  int count = -1;

  for(i=0; *(s + i) != '\0'; i++) {
    if(*(s + i) == t) {
      count = i;
    }
  }

  return count;
}


