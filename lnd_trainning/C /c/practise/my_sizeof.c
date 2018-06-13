#include<stdio.h>

/* #define SIZE(type *s) type a = s;  \
					  type b = --s; \
					  type c = a - b;  */
int main(void)
{
	int *p;
	int a = p;
	int b = --p;
	int c = a - b; 
	printf("%d\n",c);	

	return 0;
}
