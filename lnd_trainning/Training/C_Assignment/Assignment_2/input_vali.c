/*  input_validation.h  file */
#include<stdio.h>
//#include<stdlib.h>
#define BUF 512

char *input_validation(char *target)
{
	int i;
	for(i = 0 ; i < BUF ; i++){
	
		if((*target == '\0') || (*target >= 32 && *target <= 64) || (*target >= 'A' && *target <= 'Z') 
					|| (*target >= 'a' && *target <= 'z') || (*target >= '0' && *target <= '9') || (*target == '\n'));

			else{
				printf("Enter valid input\n");
				return 0;
			}
					
		target++;
	}

	return target - i;
}
