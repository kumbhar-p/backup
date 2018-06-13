/*  4. Write a shell program using vfork() and exec().  */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	pid_t pid;
	
	pid = vfork();

	if(pid > 0) {
		printf("in parent\n");
		printf("hello\n");
	}
	else if(pid == 0){
		printf("welcome\n");
		execl("/bin/ls","ls",NULL);
		printf("hai\n");
		exit(0);
	}
	else {
		printf("vfork failed\n");
		exit(EXIT_FAILURE);
	}

	return 0;		
}
