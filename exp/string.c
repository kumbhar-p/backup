#include<stdio.h>
#include<string.h>

int main(void)
{

	char str[]="ash ok";
	char str1[]=" ";
	
	char *s;
	s = strtok(str,str1);
	while(s != NULL)
	{
		printf("%s\n",s);
		s = strtok(NULL,str1);
	}
	return 0;
}
