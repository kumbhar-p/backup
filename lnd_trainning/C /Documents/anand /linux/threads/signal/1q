#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
//#define SIGANAND 60
int pid;
void fun(int num)
{
	printf("signal is detected with the continue of signum : %d\n",num);
}
int main(void)
{
	pid = getpid();
	int val = fork();
	if(val > 0){
		printf("parent = %d\n",getpid());
		printf(" i am in parent process:\n");
		printf("parent waiting for yhe signal :\n");
		signal(SIGANAND,fun);
		sleep(10);
		printf("parent exiting\n");
	}
	else if(val == 0){
		printf("i am in child process :\n");
		printf("i am sending a signal to my parent:\n");
		kill(getppid(),SIGANAND);
	}

}
























