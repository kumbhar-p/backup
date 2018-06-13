#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
int pid;
int main(void)
{
	pid = getpid();
	int val = fork();
	if(val > 0){
		printf(" i am in parent process:\n");
		sleep(5);
		printf("yyyyyyyyyyyyyyyyyyyyyyyyy\n");
	
	}
	

	else if(val == 0){
	printf("i am in child process :\n");
	printf("i am sending a signal to my parent:\n");
	kill(pid,19);
	}

}
























