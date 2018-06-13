#include"headers.h"
int input_isdigit(void)
{
    char *ch = NULL;
    int i;
	int j;
    printf("enter the character string :");
	ch = str_valid();
	for(j = 0; ch[j] != '\n' ; j++) {
    	i = user_isdigit(ch[j]);
    		if( i == 1 )
        		printf("entered one is a digit    =%c\n",ch[j]);
    		else
        		printf("entered one is not a digit=%c\n",ch[j]);
	}
    return 0;
}
int user_isdigit(int ch)
{
    if (((ch >= '0') && (ch <= '9')))
        return 1;
    else
        return 0;
}

