/*  input_validation.h  file */
#include<stdio.h>
#define BUF 512

char *input_validation(char *target)
{
	int i;
	for(i = 0 ; i < BUF ; i++){
	
		if((*target == '\0') || (*target == '0' || *target == '1') || (*target == '\n'));

			else{
				printf("Enter valid input\n");
				return 0;
			}
					
		target++;
	}

	return target - i;
}
