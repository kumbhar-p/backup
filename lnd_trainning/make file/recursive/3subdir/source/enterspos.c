/* Enter the source position */
#include <header.h>
int enterspos(char *src)
{
	int spos;
	do {
	 	printf("Enter the source position\n"); 
 		__fpurge(stdin);
		fgets( src, LEN, stdin );
		*(src + (mstrlen(src) - 1) ) = '\0';
		spos =  my_atoi(src);
	} while ( (spos < 0) || (spos > 32) );
	return spos;
}
