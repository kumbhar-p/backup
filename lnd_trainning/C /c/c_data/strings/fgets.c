#include<stdio.h>
int main(void)
{
	char str[20];
	fgets(str,sizeof(str),stdin);
	printf("%c\n",*str);
	printf("%c\n",*(str+1));
	printf("%c\n",*(str+2));
	printf("%c\n",*(str+3));
	printf("%c\n",*(str+4));
	printf("%c",*(str+5));
}
