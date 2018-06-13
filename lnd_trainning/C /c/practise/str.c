#include<stdio.h>
int main()
{
	char s[10] = {'h','e','l','l','o'};
	int i;	
	for(i = 0; i < 10; i++)
		if(s[i] == NULL)
			printf("NULL\n");
		else
			printf("%c",s[i]);
}
