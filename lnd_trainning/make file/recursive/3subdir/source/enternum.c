/* Enter the number */
#include <header.h>
int enternum(char *val)
{
	int num;
	do {
	 	printf("Enter the number\n"); 
 		__fpurge(stdin);
		fgets( val, LEN, stdin );
		*(val + (mstrlen(val) - 1) ) = '\0';
		num =  my_atoi(val); 
	} while ( num < 0 );
	return num;
}
