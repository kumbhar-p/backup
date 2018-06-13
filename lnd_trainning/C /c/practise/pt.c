#include<stdio.h>
int main()
{
	int a=10;
	void *p;
	(int *)p = &a;
	printf("%d\n",*p);
return 0;
}
