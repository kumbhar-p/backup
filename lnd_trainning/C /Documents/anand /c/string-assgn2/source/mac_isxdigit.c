#include"headers.h"
int mac_isxdigit(void)
{
    char *ch = NULL;
    int i;
	int j;
    printf("enter the character string:");
	ch = str_valid();
	for(j = 0; ch[j] != '\n' ;j++){
    	i = macisxdigit(ch,j);
    		if( i == 1 )
        		printf("entered one is hex char      = %c\n",ch[j]);
    		else
        		printf("entered one is not hex digit =%c\n",ch[j]);
	}
    return 0;
}

