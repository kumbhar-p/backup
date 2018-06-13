// set bits from given position(macro)
#include"headers.h"
int setbits_pos(void)
{
    int num;
    int s;
    int p;
    int i;
	printf("enter number :");
    num = myatoi();
    printf("enter the position  0 to 31:");
    s = myatoi();
    i = test(s);
    if( i == -3)
        return 0;
    printf("enter the position to :");
    p = myatoi();
    i = test(p);
    if( i == -3)
        return 0;
    set( num , s , p );
    binary(num);
	return 0;
}
