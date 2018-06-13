#include"headers.h"
int input_iscntrl(void)
{
    char *ch = NULL;
    int i;
	int j;
    printf("enter the character string:");
	ch = str_valid();
	for(j = 0; ch[j] != '\n' ; j++) { 
    	i = user_iscntrl(ch[j]);
    		if( i == 1 )
       			 printf("entered one is control char         = %c\n",ch[j]);
    		else
        		 printf("entered one is not control char     =%c\n",ch[j]);
	}
    return 0;
}
int user_iscntrl(int ch)
{
    if( ((ch >= 7 ) && (ch <= 13)))
        return 1;
    else
        return 0;
}

