#include<stdio.h>
int binary(int num )
{
    int i;
    for( i = 31 ; i >= 0 ; i--)
            printf("%d ",(num >> i) & 1);
    printf("\n");
    return 0;
}
