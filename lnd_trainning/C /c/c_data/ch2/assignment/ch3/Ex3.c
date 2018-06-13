#include <stdio.h>
#include<stdlib.h>

#define BUF 512

void expand(char s1[], char s2[]) {

    char c, d, e;
    int i, j;
    i = j = 0;

    while ('\0' != (c = s1[i++])) {
        if (' ' != c && '-' == s1[i] && '\0' != s1[i + 1]) {
            i++;
            d = s1[i];
            if (d < c) {
                while (c > d) {
                    s2[j++] = c--;
                }
            }
            else {
                while (c < d) {
                    s2[j++] = c++;
                }
            }
        }
        else {
            s2[j++] = c;
        }
    }
    s2[j] = '\0';
}


void main() 
{
	char *s1 = NULL;
	char *s2 = NULL;
	if(NULL == (s1 = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	if(NULL == (s2 = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	s1 = my_fgets(s1);
 	expand(s1, s2);
    	printf("%s\n", s2);

}

