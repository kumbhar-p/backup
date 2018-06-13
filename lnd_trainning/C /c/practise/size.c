#include<stdio.h>
int main()
{
	char a[3][2] = {'a','d','f','e','b','\0'};
	char b[][2];
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(b));

	return 0;
}
