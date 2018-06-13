#include<stdio.h>

void fun(int *a,int *b)
{
	int temp;
		temp = *a;
		*a = *b;
		*b = temp;
}
int main()
{
	int a = 20;
	int b = 10;
	fun(&a, &b);
	printf("%d %d\n",a,b);
}

