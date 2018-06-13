#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
#include<stdlib.h>

int pid;
FILE *fp;
void fun(int num)
{
	printf("signal is detected with signal number :%d\n",num);
	exit(0);
}
int main(void)
{
	int pid ;
	pid = fork();
	if(pid > 0){	
		printf("in parent process :\n");
		signal(SIGCHLD,fun);
		wait(NULL);
//		sleep(10);
	
	}
	if(pid == 0){
		printf("in child process : \n");
//		signal(SIGCHLD,fun);
//		exit(0);
	}
}
























