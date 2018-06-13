#include"headers.h"
int mac_islower(void)
{
    char *ch = NULL;
    int i;
    int j;
    printf("enter the character string:\n");
    ch = str_valid();
    for(j = 0 ; ch[j] != '\n' ; j++){
        i = macislower(ch,j);
        if( i == 1 )
            printf("entered one is lower char      =%c\n",ch[j]);
        else
            printf("entered one is not lower char  =%c\n",ch[j]);
    }
    return 0;
}


