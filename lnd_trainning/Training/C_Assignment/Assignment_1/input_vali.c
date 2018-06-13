/*  input_validation.h  file */
#include<stdio.h>
//#include<stdlib.h>
#define BUF 512

char *input_validation(char *target)
{
	int i;
	for(i = 0 ; *(target+i) ; i++){
	
		if((*(target+i) == 0) || (*(target+i) >= 32 && *(target+i) <= 64) || (*(target+i) >= 65 && *(target+i) <= 90) 
					|| (*(target+i) >= 97 && *(target+i) <= 122) || (*(target+i) == 10));

			else
				return 0;
					
	}

	return target;
}
