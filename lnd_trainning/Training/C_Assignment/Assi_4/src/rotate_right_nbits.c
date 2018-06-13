#include"header.h"

int right_rotate_nbits (unsigned int num,int n)
{
    int i,k = 0;
        while(k != n) {
            i = (num & 1) << 31;
            num = (num >> 1) | i;
            k++;
        }
    return num;
}

