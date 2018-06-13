#include<stdio.h>

void my_strncat(char *target , const char *source , int n)
{

	while(*target)
		target++;

		while(n--)
		{
			*target = *source;
			target++;
			source++;
		}
		
		*target = '\0';
		
}

int main(void)
{
	char target[10];
	char source[10];
	int n;

	printf("enter the string1\n");
	scanf("%s",target);
	printf("enter the string2\n");
	scanf("%s",source);
	printf("enter the n\n");
	scanf("%d",&n);
		
	my_strncat(target,source,n);
	printf("%s\n",target);	
	return 0;
}
