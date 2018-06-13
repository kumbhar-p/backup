#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *ptr ;
	char *ptr1;
	ptr = malloc(10);
	ptr1 = malloc(10);
	strcpy(ptr, "Global");
//	strcpy(ptr1, "Edge");
//	ptr1 = "Edge";
	printf("%s\n",ptr);
	printf("%s\n",ptr1);
	free(ptr);
	free(ptr1);
	//ptr1 = NULL;
	return 0;
}
