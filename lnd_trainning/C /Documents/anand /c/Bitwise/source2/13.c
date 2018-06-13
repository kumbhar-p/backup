// copy bits from one number to another number
#include"headers.h"
int cpy_bits(void)
{
    int i=0;
    int number1;
    int number2;
    int s;
    int p;
    int n;
    int j;
	printf("enter number  1 :");
    number1 = myatoi ();
	printf("enter number 2  :");
    number2 = myatoi ();
    printf("enter source position between 0 to 31:\n");
	s = myatoi();
	i = test(s);
	if( i == -3)
		return 0;	
    printf("enter the dest position of number2:\n");
    p = myatoi();
    i = test(p);
    if( i == -3)
        return 0;
    printf("enter number of  position:\n");
    n = myatoi();
    i = test(n);
    if( i == -3)
        return 0;
    printf("show bits of num:\n");
	binary(number1);
   	printf("show bits of num:\n");
	binary(number2);
	for(i = s,j = p ; n > 0 ; n--,i++,j++){
		if( ((number1 >> i) & 1) ^ ((number2 >> j) & 1)){
			if(((number1 >> i ) & 1) == 0)
                             number2 = number2 &(~ (1 << j));
			else
			     number2 = number2 | (1 << j);	
				} 
			
		}
    printf("show bits of num:\n");
	binary(number2);
	return 0;		
}
