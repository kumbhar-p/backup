#include"headers.h"
int mac_isprint(void)
{
    char *ch = NULL;
    int i;
    int j;
    printf("enter the character string:");
    ch = str_valid();
    for(j = 0; ch[j] != '\n'; j++) {
        i = macisprint(ch,j);
        if( i == 1 )
            printf("entered one is printable char      =%c\n", ch[j]);
        else
            printf("entered one is non printable char  =%c\n", ch[j]);
    }
    return 0;
}


