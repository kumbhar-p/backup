#include<stdio.h>
int main()
{

	char c;
	while((c= getchar())!=EOF)
	{
		
		switch(c)
		{
			case '\t':printf("\\t");
				  break;
			case '\b':printf("\\b");
				  break;
			case '\\':printf("\\");
				  break;
		}
		putchar(c);
	}
	
}