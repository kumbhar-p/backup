#include<stdio.h>
int main()
{
	char x = 15;
	char y = 10;
	int *ptr = NULL;
	ptr = (int *)&x;
	*ptr = 50;
	printf("%d\n",*ptr);
	return 0;
}