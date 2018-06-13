#include<stdio.h>
int main()
{
	int  ch;
	while((ch=getchar())!=EOF)
	{
	putchar(ch);
	printf("%d\n",ch!=EOF);
	}
//	printf("\nEOF - %d\n",EOF);
}
