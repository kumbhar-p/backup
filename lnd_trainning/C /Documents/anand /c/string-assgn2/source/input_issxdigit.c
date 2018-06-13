#include"headers.h"
int input_isxdigit(void)
{
    char *ch = NULL;
    int i;
	int j;
    printf("enter the character string:");
	ch = str_valid();
	for(j = 0; ch[j]!='\n' ;j++){
    	i = user_isxdigit(ch[j]);
    		if( i == 1 )
        		printf("entered one is hex char      = %c\n",ch[j]);
    		else
        		printf("entered one is not hex digit =%c\n",ch[j]);
	}
    return 0;
}
int user_isxdigit(int ch)
{
    if(((ch >= 'a') && (ch <= 'f')) || ((ch >= 'A') && (ch <= 'F')) || ((ch >= '0') && (ch <= '9')))
        return 1;
    else
        return 0;
}

