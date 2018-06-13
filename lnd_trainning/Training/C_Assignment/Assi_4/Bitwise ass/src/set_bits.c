#include"header.h"

int set_bits(int num,int num1,int s,int n)
{
	while((n--) && s) {
		if(!((num1 >> s) & 1)){}
			num = num | (1 << s);
		if(!((num >> s) & 1))
			num ^= (1 << s);			
		s--;
	}
		return num;
}

