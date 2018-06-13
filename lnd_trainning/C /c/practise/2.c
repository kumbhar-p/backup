#include<stdio.h>
extern int y =100;
void fun(void)
{
	printf("%p\n",&y);
	printf("%d\n",y);
}

