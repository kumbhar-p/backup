#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
#include<stdlib.h>

int pid;
FILE *fp;
void fun(int num)
{
	printf("signal is detected with signal nuber = %d\n",num);
	exit(0);

}
int function(void)
{
	signal(SIGFPE,fun);
	return 1/0;
}

int main(void)
{
		function();
	//	signal(SIGFPE,fun);
//		abort();
//		sleep(10);

//	getchar();

}
























