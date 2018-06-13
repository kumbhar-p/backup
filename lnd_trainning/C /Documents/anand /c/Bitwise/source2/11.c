//macro to calculate min and max
#include"headers.h"
int min(void)
{
	int n1;
	int n2;
	int i;
	int c;
	printf("enter number  1 :");
	n1 = myatoi ();
	printf("enter number 2  :");
	n2 = myatoi ();
   	for( i = 31 ; i >= 0 ; i-- ){
    	c = min_int(n1,n2);
			if( c != 0){
    			printf("the big is:%d\n",c);
				break;
			}
		}
	return 0;
}

