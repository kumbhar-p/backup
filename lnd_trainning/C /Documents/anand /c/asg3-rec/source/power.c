#include"headers.h"
int input_power(void)
{
    int a;
    int b;
    int sum = 1;
    printf("enter number:");
    a = myatoi();
    printf("enter power off:");
    b = myatoi();
    power(sum, a, b);
    return 0;
}
int power(int sum, int a, int b)
{
    sum = sum * a;
    if( --b > 0)
        power(sum, a, b);
    else {
        printf("result = %d\n", sum);
    }
    return 0;
}
