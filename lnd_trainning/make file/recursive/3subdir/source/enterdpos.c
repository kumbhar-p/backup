/* Enter the destination position */
#include <header.h>
int enterdpos(char *dest)
{
	int dpos;
	do {
	 	printf("Enter the destination position\n"); 
 		__fpurge(stdin);
		fgets( dest, LEN, stdin );
		*(dest + (mstrlen(dest) - 1) ) = '\0';
		dpos =  my_atoi(dest); 
	} while ( (dpos < 0) || (dpos > 32) );
	return dpos;
}
