#include<stdio.h>

int main(void)
{
	printf("before fork");
	if(fork()) {
		printf("parent\n");
	}
	else {
		printf("child\n");
	}

	return 0;
}