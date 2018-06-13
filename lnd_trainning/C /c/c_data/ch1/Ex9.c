#include<stdio.h>
int main()
{

	char c;
	while((c= getchar())!=EOF)
	{
		if (c != ' ')
		putchar(c);
		else {
			putchar(c);
			while((c= getchar())!=EOF)
				if (c!=' ')
				{
					putchar(c);
					break;
				}			
		}

	}
}
