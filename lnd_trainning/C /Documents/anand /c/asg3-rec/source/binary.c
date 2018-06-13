#include"headers.h"
int input_binary(void)
{
    int n;
    int i = sizeof(int) - 1;
    printf("enter the number:");
    n = myatoi();
    binary(i, n);
    putchar('\n');
    return 0;
}
int binary(int i , unsigned int n)
{
    printf("%d ", (n >> i) & 1);
    if( --i >= 0)
        binary(i, n);

    return 0;
}
