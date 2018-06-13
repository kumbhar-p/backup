#include<stdio.h>

int main()
{

	if(fork()) {
		printf("In parent : %d\n",getpid());
		printf("hello\n");
		wait(NULL);
		printf("child exited\n");
	}
	else {
		printf("In child : %d\n",getpid());
		getchar();
		printf("hello\n");
	}
	getchar();
	return 0;
}
