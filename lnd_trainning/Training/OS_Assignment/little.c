#include<stdio.h>

int main(void)
{
	int a = 1;
	
	if(*((char *)&a + 0) == 1)
		printf("little\n");
	else
		printf("big\n");

	return 0;
}
