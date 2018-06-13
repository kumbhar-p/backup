#include"header.h"

int even_bit_toggle(int num)
{
	num = num ^ 0xAAAAAAAA;

		return num;
}

int odd_bit_toggle(int num)
{
	num = num ^ 0x55555555;

		return num;
}
