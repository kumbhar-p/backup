//#include<stdio.h>
#include"headers.h"
int test (int s)
{
	int i;
    if ( s < 0 || s > 31){
        printf("invalid position:\n");
        i = myatoi();
		test(i);
        }
	return 0;
}
