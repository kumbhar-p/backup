#include<stdio.h>

int main(void)
{
	int num = 0x12345678;
	
	printf("%x",num);
	if((*(char *)&num) == 0x78) 
		printf("little\n");
	else 
		printf("big\n");

	printf("after conveting into big endian\n");
	num = (num >> 24) | ((num >> 8) & 0x0000ff00) | ((num << 8) & 0x00ff0000) | (num << 24);
	printf("%x\n",num);
	return 0;
}
