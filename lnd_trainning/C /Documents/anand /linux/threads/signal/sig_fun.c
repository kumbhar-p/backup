#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
int pid;
FILE *fp;
void fun(int num)
{
	fp = fopen("aaa","w+");
	fputs("signal detected",fp);
	
	printf(" i am in function:\n");
	printf("sfsddddddddyyyyyyyyyyyyyyyyyy\n");
}
int main(void)
{
	pid = getpid();
	int val = fork();
	if(val > 0){
		printf(" i am in parent process:\n");
		printf("parent waiting for yhe signal :\n");
		signal(SIGUSR1,fun);
		wait(NULL);
		printf("parent exiting\n");
	
	}
	

	else if(val == 0){
	printf("i am in child process :\n");
	printf("i am sending a signal to my parent:\n");
//	sleep(5);
	kill(getppid(),SIGINT);
	printf("==============================\n");
	printf("==============================\n");
	printf("==============================\n");
	}

}
























