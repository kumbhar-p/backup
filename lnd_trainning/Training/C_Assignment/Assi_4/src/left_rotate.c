#include"header.h"

int left_rotate_bits (unsigned int num)
{
	int i,k = 0;
	int n = num;
		while(k != n) {
			i = (num >> 31) & 1;
			num = (num << 1) | i;
			k++;
		}
	return num;
}

