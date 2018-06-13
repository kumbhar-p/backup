#include<stdio.h>
int x = 10;
	static int y;
int main()
{
	int y = y;
	printf("%d\n",y);
}
