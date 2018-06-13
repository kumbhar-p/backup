#include<stdio.h>

main()
{  
//#undef NULL
    char *s = "Hello";

    while(*s != NULL)
    {
        printf("%c", *s++);
    }
}
