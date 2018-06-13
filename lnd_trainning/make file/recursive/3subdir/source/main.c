/* Given the bit position swap the bit value in a number */
#include <header.h>

int main()
{
	char *val = NULL, *dest = NULL, *src = NULL;
	char *choice = NULL;
	unsigned int num, dpos, spos, pos, ans;
	if ( ( val = (char *)malloc( LEN * sizeof (char) ) ) == NULL ) {
		printf("Memory allocation for val failed\n");
		exit (1);
	}
	if ( ( dest = (char *)malloc( LEN * sizeof (char) ) ) == NULL ) {
		printf("Memory allocation for dest failed\n");
		free(val);
		exit (2);
	}
	if ( ( src = (char *)malloc( LEN * sizeof (char) ) ) == NULL ) {
		printf("Memory allocation for src failed\n");
		free(val);
		free(dest);
		exit (3);
	}
	if ( ( choice = (char*)malloc( LEN * sizeof (char) ) ) == NULL ) {
		printf("Memory allocation for src failed\n");
		free(val);
		free(dest);
		free(src);
		exit (4);
	}
	do {
		num = enternum(val);
		dpos = enterdpos(dest);
		spos = enterspos(src);
		ans = bit_swap(num, dpos, spos);
		pos = 32;
		while (pos--) {
			printf("%d", ( ans & ( 1 << pos) ) ? 1 : 0 );	
		}		
		printf("\npress y to continue\n");
		__fpurge(stdin);
		fgets(choice, LEN, stdin);
		*(choice + (mstrlen(choice) - 1)) = '\0';
	} while (*(choice + 0) == 'y' || *(choice + 0) == 'Y');

	free (val);
	free (dest);
	free (src);	
	free (choice);
	return 0;
}











	


