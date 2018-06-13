//copy bit source of num1 to destination of number2
#include"headers.h"
int cp(void)
{
    int i;
    int n1;
    int n2;
    int s;
    int d;
    printf("enter number 1:");
    n1 = myatoi();
    printf("enter number 2:");
    n2 = myatoi();
    printf("enter a source between 0 to 31:\n ");
    s = myatoi();
    i = test(s);
    if( i == -3)
        return 0;
    printf("enter a destination between 0 to 31:\n ");
    d = myatoi();
    i = test(d);
    if ( i == -3)
        return 0;
    printf("binary equalent of two numbers:\n");
    binary( n1 );
    binary( n2 );
    if(((n1 >> s )& 1) ^ (((n2 >> d) & 1))) {
        if(((n1 >> s) & 1) == 0) {
            n2 = ((n2) &(~(1 << d)));
            printf("%d\n",n2);
        }
        else{
            n2 = n2 | ((1 << d));
            printf("%d\n", n2);
        }
    }
    printf("aftre operation\n");
    binary( n2 );
    return 0;
}


