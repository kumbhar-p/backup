#include"header.h"

int left_rotate_nbits (unsigned int num, int n)
{
  	 int i,k = 0;
        while(k != n) {
            i = (num >> 31) & 1;
            num = (num << 1) | i;
            k++;
        }
    return num;
}
