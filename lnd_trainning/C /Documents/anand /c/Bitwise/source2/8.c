//left shift and right shift
#include"headers.h"
int rotate(void)
{
    int i;
    int n1;
    int n;
    int choice;
	printf("enter number :");
	n1 = myatoi();
    printf("enter number of bits to shift:");
	n = myatoi();
	i = test(n1);
	if( i == -3)
		return 0;
    printf("1.left shift\n2.right shift\n");
    printf(" enter ur choice for shift direction:");
    scanf("%d",&choice);
    if(choice == 1)
    	rotate_bitleft( n1 , n );
    if(choice == 2)
    	rotate_bitright(n1, n);
	return 0;
}
int rotate_bitleft(int num, int n)
{

	printf("show bits of num:\n");
	binary(num);
 	num = (num << n) | (num >> (32 - n));
    printf("after operation show bits of num:\n");
	binary(num);
	return 0;
}
int rotate_bitright(int num, int nbit)
{
    printf("show bits of num:\n");
    binary(num);
    num = (num >> nbit) | (num << (32 - nbit));
    printf("after operation show bits of num:\n");
    binary(num);
	return 0;
}

