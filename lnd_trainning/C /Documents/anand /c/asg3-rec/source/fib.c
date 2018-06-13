//#include<stdio.h>
#include "headers.h"
int fib(int a, int b, int c, int n)
{
    printf("%d ", c);
    a = b;
    b = c;
    c = a+b;
    n--;
    if(n>0)
        fib(a,b,c,n);
    return 0;
}
int input(void)
{
    int n;
    int a= 0;
    int b = 1;
    int c = a+b;
    printf("enter the number up to you want:");
    n = myatoi();    
    printf("%d ", a);
    printf("%d ", b);
    n = n-2;
    fib(a, b, c, n);
    return 0;
}
