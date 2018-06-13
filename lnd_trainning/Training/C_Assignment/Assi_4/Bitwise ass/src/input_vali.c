#include<stdio.h>
#include<limits.h>
#include<math.h>

#define BUF 512

char *input_validation(char *target)
{
	int i;
	for(i = 0 ; *(target + i); i++){
	
		if( (*(target + i) == '-') || ((*(target + i) >= '0') && (*(target + i) <= '9')) || (*(target + i) == '\0') || (*(target + i) == '\n'))
			continue;

			else
				return 0;
	}

	return target ;
}

int num_validation(int num)
{

	if((num >= INT_MIN) && (num <= INT_MAX))
		return num;
	else
		return 0;
} 


