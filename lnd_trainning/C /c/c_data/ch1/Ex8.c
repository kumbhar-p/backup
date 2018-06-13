/* Exercise 1-8. Write a program to count blanks, tabs, and newlines.   */

#include<stdio.h>

int main(void) 
{
    char ch;
	int l = 0,s = 0,t = 0;
   	
	while ((ch=getchar()) != EOF)
	{
		if(ch=='\t')
		t++;	
		if(ch==' ')
		s++;
		if(ch=='\n')
		l++;
	}
	printf("\nLines - %d\nBlank spaces - %d\nTab - %d\n",l,s,t);

	return 0;
}
