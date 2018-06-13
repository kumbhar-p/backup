#include<stdio.h>
const volatile int a = 10;
int main(void)
{
	while(1) {
		sleep(2);
		printf("%d\n",a);
	}
	return 0;
}
