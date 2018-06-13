#include<stdio.h>

#define BUF 512

int main()
{
	char *str = NULL;
	str = ((char *)malloc(sizeof(str)*BUF));
	printf("enter data\n");
	fgets(str,10,stdin);
	printf("%s\n",str);
	fgets(str,10,stdin);
	printf("%s\n",str);
	fgets(str,10,stdin);
	printf("%s\n",str);
	fgets(str,10,stdin);
	printf("%s\n",str);
	
}
