#include<stdio.h>

int main(void)
{
	int a[5] = {2,3,4,5,6};
	int *p[] = {a, a+1, a+2, a+3, a+4};
	int **ptr = p;

	printf("a - %p\n&a - %p\n*a - %d\n",a, &a, *a);
	printf("p - %p\n&p - %p\n*p - %p\n**p - %d\n",p, &p, *p, **p);
	printf("ptr - %p\n*ptr - %p\n**ptr - %d\n",ptr, *ptr, **ptr);

	return 0;
}	
