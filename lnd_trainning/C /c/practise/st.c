#include<stdio.h>

int main(void)
{
	char *str[] = { "hi", "hello","good","fine"};
	printf("%s\n",*str);
	printf("%s\n",*(str+1));

	return 0;
}
