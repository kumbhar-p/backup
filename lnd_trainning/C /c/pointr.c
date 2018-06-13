#include<stdio.h>
int main(void)
{
	int arr[] = {1,2,3,4,5,6,7};
	int (*ptr)[2] = arr;

	printf("ptr - %p\n", ptr);
	printf("*ptr - %p\n", *ptr);
	printf("&ptr - %p\n", &ptr);
	printf("(*ptr)[1] - %d\n", (*ptr)[1]);
	printf("(*(ptr + 1))[0] - %d\n", (*(ptr + 1))[0]);
	return 0;
}
	
