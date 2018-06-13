#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int *p = malloc(10);

	printf("%p\n",p);

	p = realloc(p,30);

	printf("%p\t",p);

	return 0;
}

