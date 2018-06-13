// setbits in one number and copy it to another number
#include"headers.h"
int setbits(void)
{
    int i;
    int j;
    int x;
    int p;
    int n;
    int y;
	printf("enter number :");
    x = myatoi();
	printf("enter number :");
    y = myatoi();
    printf("enter position:");
    p = myatoi();
    i = test(p);
    if( i == -3)
        return 0;
    printf("enter number of bits:");
    n = myatoi();
    i = test(n);
    if( i == -3)
        return 0;
    printf("binary equalent of x:\n");
    binary(x);
    printf("binary equalent of y:\n");
    binary(y);
    for(j = p ; n > 0 ; n--,j++)
          y = y | (1 << j);

    printf("after operation\n");	
    binary(y);
	return 0;
}
