//reversing the bits in a number
#include"headers.h"
int reverse_bits(void)
{
    int num;
    int l;
    int r;
	printf("enter number :");
	num = myatoi();
    printf("show bits of num:\n");
    binary(num);
    for(l = 31, r = 0 ; l > r ; l--, r++){
        if(((num >> l) & 1) ^ (( num >> r) & 1)){
                num = num ^ (1 << l);
                num = num ^ (1 << r);
            }
        }
    printf("after reversing:\n");
    binary(num);

	return 0;

}

