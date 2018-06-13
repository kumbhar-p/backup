#include<stdio.h>
int main()
{
	int i = 5;
	int *p = NULL;
	p = &i;
	printf("%p\n",&p);
	printf("i - %p\n",&i);
	printf("%p\n%p\n",*&p,&*p);

	return 0;
}
