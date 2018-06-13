#include"headers.h"
// test a bit and set
int bit_ts(void)
{
    int i;
    int num;
    int pos;
	printf("enter number :");
	num = myatoi();
    printf("\nenter the bit position between 0 t0 31:");
	pos = myatoi();
	i = test(pos);
	if( i == -3)
		return 0;
    printf("show bits of num:\n");
    binary( num );
    if( (( num >> pos) & 1) == 0){
        num = num | (1<<pos);
    }
    printf("after operation:\n");
    binary( num );
	return 0;
}

