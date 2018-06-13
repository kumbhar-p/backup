// calculating number of trailing zeros in a number
#include"headers.h"
int binary(int);
int trail(void)
{
	int i;
	int num;
	int count=0;
	printf("enter number :");
	num = myatoi();
	printf("show bits of num:\n");
	binary(num);
	for(i = 0 ;i <= 31 ; i++){
			if(((num >> i)&1) == 0){
				count++;
			}
			else
				break;
		}
	printf("the number of trail zeros is : %d\n",count);
	return 0;
}	
		
		
