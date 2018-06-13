#include<stdio.h>
char *n = "hello";
int main()
{
	char *p = "global";
	char s[8] = "Edge";
	p = &s[0];
//	printf("%s\n",p);	
	*p = 'p';
//	printf("%s\n",p);
	p = p + 2;
	*p = 1;
	printf("%s\n",s);
	p = n;
//	*p = n;
//	printf("%s\n",n);
	return 0;
}
