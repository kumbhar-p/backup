/*Write a program to print a histogram of the lengths of words in its input. 
histogram with the bars horizontal;*/

#include<stdio.h>
int main(void)
{
	int c;

	while((c=getchar())!=EOF)
	{

		if( c == ' ' || c == '\n' || c == '\t')
			putchar('\n');
		else
			putchar('*');
	}
}

