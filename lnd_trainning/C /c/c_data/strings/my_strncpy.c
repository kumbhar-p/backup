#include<stdio.h>

void my_strncpy(char *target , const char *source , int n)
{
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

	printf("enter the string & n\n");
	scanf("%s",source);
	scanf("%d",&n);
	
		
	my_strncpy(target,source,n);
	printf("%s\n",target);	
	return 0;
}
