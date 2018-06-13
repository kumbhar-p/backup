//11- macro to clear right most set bit
#include"headers.h"
int clr_msb(void)
{
    int n1;
    int i;
	printf("enter number :");
    n1 = myatoi();
    clr( n1 );
    binary( n1 );
	return 0;
}
