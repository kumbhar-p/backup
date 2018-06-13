#include"header.h"

int right_rotate_bits (unsigned int num)
{
    int i,k = 0;
    int n = num;
        while(k != n) {
            i = (num & 1) << 31;
            num = (num >> 1) | i;
            k++;
        }
    return num;
}
