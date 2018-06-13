#include"headers.h"
int input_isalpha(void)
{
    char *ch=NULL;
    int i;
    int j;
    printf("enter the character string:");
    ch = str_valid();
    for(j = 0; ch[j]!= '\n' ; j++) {

        i = user_isalpha(ch[j]);
        if( i == 1 )
            printf("entered one is alphabatic char        =%c\n",ch[j]);
        else
            printf("entered one is not alphabatic char    =%c\n",ch[j]);
    }
    return 0;
}
int user_isalpha(int ch)
{
    if(((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))

        return 1;
    else
        return 0;
}

