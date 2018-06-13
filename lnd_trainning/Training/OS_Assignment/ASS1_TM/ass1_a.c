/*  a. Will both parent and child share the same local data ?  */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(void)
{
	pid_t pid;
	int a = 10;

	pid = fork();

	if(pid > 0) {
		a = 20;
		printf("In parent\n");
		printf("In parent a - %d\n",a);
	}
	else if(pid == 0) {
			printf("In child\n");
			printf("In child a - %d\n",a);
	}
	else {
		printf("fork failed\n");
		exit(EXIT_FAILURE);
	}

	return 0;
}
