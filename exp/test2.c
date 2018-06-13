#include<stdio.h>
#define message_for(a,b) \
    printf( #a " and " #b ": we welcome you!\n")

int main(void)
{
    message_for(carole, debra);
    return 0;
}
