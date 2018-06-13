#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *p = malloc(4);

 	free(p);
 	free(p);
}
