#include<stdio.h>

typedef struct st
{
	int ch;
	char c;
	double d;
}ST;

int main()
{
	ST a = {10, 'b', 12};
	printf("%d\n",sizeof(ST));
	printf("%p\n",&a.ch);
	printf("%p\n",&a.c);
	printf("%p\n",&a.d);
	return 0;
}
