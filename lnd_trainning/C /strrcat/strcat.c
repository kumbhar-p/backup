#include<stdio.h>

int main()
{
	int rem;
	int i = 1;
	int hex = 0;
	int b;

	scanf("%d",&b);
	while(b != 0) {
		rem = b % 10;
		hex = hex + rem * i;
		i = i * 2;
		b = b / 10;
	}
	printf("%d\n",hex);
}
