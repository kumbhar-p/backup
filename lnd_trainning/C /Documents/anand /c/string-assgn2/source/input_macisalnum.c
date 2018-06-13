#include"headers.h"
int input_ismacalnum(void)
{
    char *a = NULL;
    int j;
    int i;
    printf("enter the character string");
    a = str_valid();
    for(j = 0; a[j] != '\n'; j++) {
        i = macisalnum(a,j)
            if( i == 1 )
                printf("entered one is alphanumeric char=%c\n",a[j]);
            else
                printf("entered one is not alphanumeric char=%c\n",a[j]);
    }
    return 0;
}

