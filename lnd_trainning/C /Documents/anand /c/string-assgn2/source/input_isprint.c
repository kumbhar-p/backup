#include"headers.h"
int input_isprint(void)
{
    char *ch = NULL;
    int i;
	int j;
    printf("enter the character string:");
	ch = str_valid();
	for(j = 0; ch[j] != '\n' ; j++) {
    	i = user_isprint(ch[j]);
    	if( i == 1 )
        	printf("entered one is printable char      =%c\n", ch[j]);
    	else
        	printf("entered one is non printable char  =%c\n", ch[j]);
	}
    return 0;
}
int user_isprint(int ch)
{
    if(((ch >= 33) && (ch <= 126)))
        return 1;
    else
        return 0;
}

