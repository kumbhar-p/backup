//inverting bits
#include"headers.h"
int invert(void)
{
    int i;
    int num;
    int pos1;
    int n;
    int count=0;
	printf("enter number :");
    num = myatoi();
    printf("enter the position 0 t0 31:");
    pos1 = myatoi();
    i = test(pos1);
    if( i == -3)
        return 0;
    printf("enter the no of bits:\n");
    n = myatoi();
    i = test(n);
    if( i == -3)
        return 0;
    printf("binary of given number:\n");
    binary(num);
    for(i = 0;i <= 31 ; i++){
			if(i >= pos1 ){
					
                num = num ^ (1<<i);
				count++;
				if(count == n)
				break;	
           } 
	}
    printf("after operation:\n");
    binary(num);
	return 0;
}
	
