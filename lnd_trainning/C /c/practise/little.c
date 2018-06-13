#include<stdio.h>
int main(void)
{
	unsigned int num = 256;
	char *p;
	p = (char *)&num;
	if(*p)
	printf("big\n");
	else
	printf("little\n");
}
	
