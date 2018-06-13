#include<stdio.h>

int strlen(char *s)
{
	char *p = s;
	while(*p != '\0')
		p++;
	return p-s;
}

int main()
{
	char *s = "hello";
	int n = strlen(s);
	printf("%d\n",n);
	return 0;
}

