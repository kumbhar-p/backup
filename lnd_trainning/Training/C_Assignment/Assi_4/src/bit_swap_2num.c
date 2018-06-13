#include"header.h"

int bit_swap(int num,int num1,int s,int d)
{
		if(((num >> s) & 1) == ((num1>> d) & 1)){}

		else {
				num = num ^(1 << s);
				num1= num1^(1 << d);
		}

		return 0;
}

