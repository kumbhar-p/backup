#include<stdio.h>
int main(void)
{
	int a = 10;
	int b = 20;
	int c ;
	c = (a++ < b++) ? a++:b++;
	printf("%d %d %d\n",a,b,c);
	return 0;
}
	
