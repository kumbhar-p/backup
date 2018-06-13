#include<stdio.h>

char *ipvalid(char *str)
{
	int i = 0;
	for(i = 0; *(str + i) != '\0'; i++) {
		
		if( (*(str + i) >= 'A' && (*(str + i) <= 'Z')) ||(*(str + i) >= 'a' && (*(str + i) <= 'z')) || (*(str + i)) == 1 ) {
			continue;
		}
		else {
			printf("invalid charaters\n");
			exit(0);
		}
		
	}

	return str;
} 
