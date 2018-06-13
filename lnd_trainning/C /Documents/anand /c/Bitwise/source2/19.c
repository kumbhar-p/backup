// toggle bits from given position
#include"headers.h"
int toggle_bits(void)
{
    int n1;
    int s;
    int d;	
    int i;
    printf("enter the number:");
    n1 = myatoi();
    printf("enter the position from:");
    s = myatoi();
    i = test(s);
    if( i == -3)
        return 0;
    printf("enter the position to :");
    d = myatoi();
    i = test(d);
    if( i == -3)
        return 0;
    togg(n1,s,d);
    binary(n1);
	return 0;
}
