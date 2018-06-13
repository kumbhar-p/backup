#include"header.h"

int count_bit_set (int num)
{
    int i,c = 0;
		for(i = 31; i >= 0; i--) {
            if((num >> i) & 1)
			c++; 
        }
    return c;
}

