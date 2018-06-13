#include <stdio.h>

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int main(void)
{
	int a, b;
	printf ("Enter two no. :\n");
	scanf ("%d%d", &a,&b);
	printf("Addition = %d\n", add(a,b));
	printf("Substraction = %d\n", sub(a,b));	
	return 0;
}
