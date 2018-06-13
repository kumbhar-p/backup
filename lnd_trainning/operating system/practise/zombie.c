#include<stdio.h>
int main()
{
	printf("%d\n",getpid());
	if(fork() > 0) {
		printf("in parent\n");
		printf("hello\n");
		getchar();
	}
	else {
		printf("in child\n");
		printf("hi\n");
	}
	
	return 0;
}
