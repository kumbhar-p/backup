#include<stdio.h>
int main()
{
	printf("%d\n",getpid());
//	getchar();
	fork();
	fork();
	printf("hello\n");
	getchar();
	
	return 0;
}
