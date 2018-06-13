#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr = NULL;
	ptr =(int *) malloc(20);	
	printf("%d\n",*(ptr - 1));
return 0;
}
