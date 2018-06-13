/*  b. Will both parent and child share the same global data ?  */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int a;

int main(void)
{
	pid_t pid;

	pid = vfork();

	if(pid > 0) {
		printf("In parent\n");
		printf("In parent a - %d\n",a);
	}
	else if(pid == 0) {
			a = 20;
			printf("In child\n");
			printf("In child a - %d\n",a);
			exit(0);
	}
	else {
		printf("vfork failed\n");
		exit(EXIT_FAILURE);
	}

	return 0;
}
