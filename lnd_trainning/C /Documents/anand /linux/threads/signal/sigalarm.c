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
	signal(SIGALRM,fun);
	alarm(4);
	pause();

}
























