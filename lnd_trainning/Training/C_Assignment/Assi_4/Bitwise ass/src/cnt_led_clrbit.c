#include"header.h"

int cnt_leading_cleared_bits (int num) 
{
    int i,c = 0;
		for(i = 31; i >= 0; i--) {
            if(!((num >> i) & 1))
				c++;
			else
				break; 
        }
		return c;
}
