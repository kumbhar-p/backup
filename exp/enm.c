#include<stdio.h>
enum s{mon,tues, wed,thu,fri,sat,sun};

int main(void)
{
	printf("%d\n", sizeof(enum s));
	return 0;
}
