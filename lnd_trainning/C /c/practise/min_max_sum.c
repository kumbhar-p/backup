
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){

    unsigned long long int a; 
   	unsigned long long int b; 
    unsigned long long int c; 
    unsigned long long int d;
    unsigned long long int e;
    unsigned long long int sum = 0;
    unsigned long long int res[10];
    unsigned long long int i, j, k;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    res[0] = b+c+d+e;
	printf("res[0] = %lld\n",res[0]);
    res[1] = a+c+d+e;
	printf("res[1] = %lld\n",res[1]);
    res[2] = a+b+d+e;
	printf("res[2] = %lld\n",res[2]);
    res[3] = a+b+c+e;
	printf("res[3] = %lld\n",res[3]);
    res[4] = a+b+c+d;
	printf("res[4] = %lld\n",res[4]);
    
	unsigned long long int small ,large;
    small = large = res[0];
    for(i = 1; i < 5; i++ ) {
        if(small > res[i])
            small = res[i];
        if(large < res[i])
            large = res[i];
    }
            printf("%lld %lld ",small, large);

    return 0;


}

