#include"header.h"

int invert_bits(int num,int s,int n)
{
	while((n--) && s) {
		if(((num >> s) & 1))
			num = num & ~(1 << s);
		else 
			num= num | (1 << s);
		s--;
	}
		return num;
}

