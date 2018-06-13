#include"header.h"

int cnt_trailing_set_bits (int num)
{
    int i,c = 0;
        for(i = 0; i <= 31; i++) {
            if((num >> i) & 1)
				c++;
            else
                break;
        }
        return c;
}
