// rightshift operation
#include"headers.h"
int rightshift(void)
{
	int n1;
	int n;
	int i;
	printf("enter number :");
    n1 = myatoi();
    printf("enter the bits to shift right:");
    n = myatoi();
    i = test(n);
    if( i == -3)
        return 0;
	binary(n1);
	n1 = (n1>>n) | (n1<<(32-n));
	binary(n1);
	return 0;
}
