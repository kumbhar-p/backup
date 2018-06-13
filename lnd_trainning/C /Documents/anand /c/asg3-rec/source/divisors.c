#include"headers.h"
int divisors(void)
{
    int n;
    int sum = 0;
    int i;
    int count = 0;
    printf("enter the number:");
    n = myatoi();
    if(n > 0) {
        for( i = 1; i <= n ; i++) {
            if( n%i == 0){
                printf("divisor = %d\n",i);
                sum = sum + i;
                count++;
            }
        }
    }
    else {
        for( i = -1; i >= n ; i--) {
            if( (n)%(i) == 0){
                printf("divisor = %d\n",i);
                sum = sum + i;
                count++;
            }
        }
    }
    printf("number of divisors:%d\nsum =%d\n",count,sum);
    return 0;
}
