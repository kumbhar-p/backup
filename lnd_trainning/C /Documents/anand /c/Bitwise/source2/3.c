// even bits toggle and odd bits toggle
#include"headers.h"
int fun_even(void)
{
    int num;
    int i;
	printf("enter number :");
	num = myatoi();
    printf("show bits of num:\n");
    binary( num );
    for(i = 31 ; i >= 0 ; i--) {
   		 if( (i&1) == 0)
    		num  = (num ^ (( 1<<i )));
        }
    printf("even toggel after operation\n");
    binary( num );
    return 0;
}
int fun_odd(void)
{
    int i;
    int num;
	num = myatoi ();
    for(i = 31 ; i >= 0 ;i--) {
   		if((i&1 )!= 0)
   			num  = (num ^ (( 1 << i)));
    }
    binary(num);
    return 0;
}

