#include"header.h"

int bit_copy(int num,int num1,int s,int d,int n)
{
	while((n--) && s && d) {
		if(((num >> s) & 1) == ((num1>> d) & 1)){}

		else 
				num1= num1^(1 << d);
		s--;
		d--;
	}
		return num1;
}

