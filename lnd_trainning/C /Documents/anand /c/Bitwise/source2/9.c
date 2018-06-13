// count number of set bits and number of clear bits in a given number
#include"headers.h"
int count_bit(void)
{
	int i;
	int num;
	int set=0;
	int clear=0;
	printf("enter number :");
	num = myatoi();
	printf("show bits of num:\n");
	binary(num);
	for(i = 31 ; i >= 0 ; i--){
		if(((num >> i)&(1)) == 1)
			set++;
		else
			clear++;
		}
	printf("set bits in a number is:%d\n",set);
	printf("clear bits in a number is:%d\n",clear);
	return 0;
}

