#include<stdio.h>
int main()
{
	int a = 0;
	int *const p = &a;
	 p++;
	*p = 20;
	printf("%d\n",*p);
}

