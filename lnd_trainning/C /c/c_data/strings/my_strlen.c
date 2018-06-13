#include<stdio.h>

int my_strlen(char *p)
{
	int len = 0;

	while(*p++)
		len++;
	return len;	
}

int main(void)
{
	char *q = "hello";
	int len;

	len = my_strlen(q);
	printf("%d\n",len);
	return 0;
}
	
