#include<stdio.h>

enum escapes { BELL = '\a', BACKSPACE = '\b', TAB = '\t',
NEWLINE = '\n', VTAB = '\v', RETURN = '\r' };

int main(void)
{
	unsigned int i = 1;  //1u is decimal no.
	int j;
	unsigned int res = 0;
	int num = -4;
	res = i & 1;
	printf("%d\n",res);
	res = i | 1;
	printf("%d\n",res);
	res = i ^ 1;
	printf("%d\n",res);
	res = 1 << 2;
	printf("%d\n",res);
	res = -4 >> 2;
	printf("%d\n",res);
	for(j = 32; j > 0; j--)
		printf("%d",(num >> j) & 1);

	printf("\n");

	num = -4 >> 2;
	for(j = 32; j > 0; j--) {
		if(j % 8 == 0)
			printf(" ");
		printf("%d",(num >> j) & 1);
	}
	printf("\nhello world");
}
