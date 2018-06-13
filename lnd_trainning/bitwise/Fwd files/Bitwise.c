


/* fun		swap the bits in an integer
 *
 * @n,@d,@s
 *n : number
  d : destination bit position in number 'n'
  s : source bit position in number 'n'

 * return	an integer obtained after swapping the bits
 *
 */

int bit_swap(int n , int d , int s)
{
	return (((n >> d) ^ (n >> s )) & 1 ) ? (n ^ ( (1 << d) |
			       	(1 << s) )) : n ;
}

/*  fun  copy a bit from a number from specified postion to specified position in the other number
 *
 *  @snum,@s,@dnum,@d
 *
 *  return  integer 
 */

int bit_cp(int s , int d , int snum , int dnum)
{
	
	return (snum & (1 << s )) ? ( dnum | ( 1 << d ) ) : (dnum & ~(1 << d ));
}

/* complements the even bits in an integer	*/


int even_bit_toggle(int num)
{
	int tmp = 1;

	while( tmp ) {

		num ^= tmp;
		tmp <<= 2;
	}

	return num;
}

/* fun 	to_lower converts the input character ch into lower case if it is upper case
 *
 * @ch
 *
 * return	lower case of the i/p if it was upper case , else returns as it is
 */

int to_lower(int ch)
{
	return  (ch >= 65 && ch <= 90) ?  ch  | ( 1 << 5 )  : ch ;
}

/* fun converts the input character into upper case ,if it was lower case
 *
 *@ch

 return	 upper case character if the input is lower case else return as it is

 */
int to_upper(int ch)
{
	return  (ch >= 97 && ch <= 122) ?  ch & ~( 1 << 5)  : ch ;
}

/* fun	add , performs bitwise addition on two integers
 *
 * @num1,@num2
 *
 * return	sum of the two integers num1 and num2
 *
 */

int add(int num1 , int num2)
{
	int tmp = 0;

	while( num2 ) {
		tmp = num1 ^ num2;
		num2 = (num1 & num2) << 1;		/*left shifting carry by 1 */
		num1 = tmp;
	}

	return num1;

	
}

/* fun	add , performs bitwise subtraction on two integers
 *
 * @num1,@num2
 *
 * return	subtraction of the two integers num1 and num2
 *
 */

int sub(int num1 , int num2)
{
	int tmp = 0;

	while( num2 ) {
		tmp = num1 ^ num2;
		num1 = tmp;
		num2 = (num1 & num2) << 1;		/*right shifting carry by 1 */

	}

	return num1;

	
}

/* fun	mul , performs bitwise multiplication on two integers
 *
 *@num1,@num2

 returns	product of the integers num1 and num2

*/

int mul(int num1 , int num2)
{
	int sign1 = 1 , sign2 = 1 ;
	if ( num1 < 0 )
		sign1 = -1;		/* storing the sign  */
	if(num2 < 0)
		sign2 = -1;

	int sum = 0;		/* to store the product of num1 and num2  */

	for( num1 *= sign1 , num2 *= sign2; num2 ; num1 <<= 1 , num2 >>= 1)
		if ( num2 & 1)
			sum += num1;

	return (sum * sign1 * sign2 );
}

/* fun	div , performs bitwise division through repeated subtraction
 *
 *@num1,@num2

 returns	quotient after the division

*/

int sub(int num1 , int num2);
int _div(int num1 , int num2)
{
	int sign1 = 1 , sign2 = 1, count = 0;
	if ( num1 < 0 )
		sign1 = -1;
	if(num2 < 0)
		sign2 = -1;

	num1 *= sign1;			/* will turn num1 and num2 positive ,if it was negative */
       	num2 *= sign2;
	while((num1 >= num2)) {
		num1 = sub(num1,num2);
		++count;
	}

	return (count * sign1 * sign2 );
}

/* fun	rotate the bits in a number in either direction
 *
 *
 * @num ,@nbit ,@dir
 *	
 *dir == 0 : left rotation	 dir == 1 , right rotation
 * return	obtained integer after the rotation
 *
 */

int size();
int rotate_bit( int num , int nbit , int dir)
{
	//return dir ? ((num >> nbit) | ( num << (size() - nbit))) :(( num << nbit) | ( num >> (size() - nbit) ));
	return dir ? ((num >> nbit) | ( num << (size() - nbit))) :(( num << nbit) | ( num >> (size() - nbit) ));
}


/* fun	 size calculates size of a compiler , using integer, var is assigned with ~0
 * 	i.e all bits are set , counting each set bit with every right shift untill it reaches to 0
 *
 * @void
 *
 * return the size of a compiler
 *
 */

int size()
{
	int s = 1;
	unsigned var = (unsigned) ~0;

	for ( ; (var >>= 1 ) ; ++s)
	;
	return s;
}



