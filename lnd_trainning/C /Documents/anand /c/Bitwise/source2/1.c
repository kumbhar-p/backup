// swapping of one bit
#include"headers.h"
int bit_swap(void)
{
    int i;
    int n1;
    int d;
    int s;
    printf("enter number:");
    n1 = myatoi();
    printf("enter the source position between 0 to 31: ");
    s = myatoi();
    i = test(s);
    if( i == -3)
        return 0;
    printf("enter the dest position between 0 to 31:");
    d = myatoi();
    i = test (d);
    if( i == -3)
        return 0;
    printf("show bits of given number:\n");
    binary( n1 );
    if( ((n1 >> s) &1) ^ (( n1 >> d ) &1) ){
        n1 = n1 ^ (1 << s );
        n1 = n1 ^ (1 << d );
    }
    printf("after operation:\n");
    binary( n1 );
    return 0;
}

