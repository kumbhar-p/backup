#include<stdio.h>
int main()
{
	int *ptr;
	ptr = malloc(30);
	printf("process id = %d\n",getpid());
	getchar();
}
