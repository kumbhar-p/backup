#include"headers.h"
int input_isupper(void)
{
    char *ch = NULL ;
    int i;
    int j;
    printf("enter the character string:");
    ch = str_valid();
    for(j = 0; ch[j] != '\n' ; j++) { 
        i = user_isupper(ch[j]);
        if( i == 1 )
            printf("entered one is upper char         = %c\n",ch[j]);
        else
            printf("entered one is not upper char     =%c\n",ch[j]);
    }
    return 0;
}
int user_isupper(int ch)
{
    if( ((ch >= 'A') && (ch <= 'Z')))
        return 1;
    else
        return 0;
}

