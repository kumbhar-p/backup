/* Bit_swap funtion */

int bit_swap(int num, int dpos, int spos)
{
	if ( ( (num & (1 << dpos) ) ? 1 : 0 ) != \
			( (num & (1 << spos) ) ? 1 : 0) ){
		num = num ^ ( (1 << dpos) | (1 << spos));
	}
	return num;
}
