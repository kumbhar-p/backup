#include"headers.h"
int mac_isdigit(void)
{
    char *ch = NULL;
    int i;
    int j;
    printf("enter the character string :");
    ch = str_valid();
    for(j = 0; ch[j] != '\n' ; j++) {
        i = macisdigit(ch,j);
        if( i == 1 )
            printf("entered one is a digit    =%c\n",ch[j]);
        else
            printf("entered one is not a digit=%c\n",ch[j]);
    }
    return 0;
}


