#include"headers.h"
int input_islower(void)
{
    char *ch=NULL;
    int i;
	int j;
    printf("enter the character string:\n");
	ch  = str_valid();
	for(j = 0 ; ch[j]!='\n' ; j++){
    	i = user_islower(ch[j]);
    		if( i == 1 )
        		printf("entered one is lower char      =%c\n",ch[j]);
    		else
        		printf("entered one is not lower char  =%c\n",ch[j]);
	}
    return 0;
}
int user_islower(int ch)
{
    if( ((ch >= 'a') && (ch <= 'z')))
        return 1;
    else
        return 0;
}

