#include<stdio.h>
#include<sys/types.h>
#include<signal.h>

int pid;
FILE *fp;
void fun(int num)
{
	printf("signal is detected with signal nuber = %d\n",num);

}
int main(void)
{
		signal(SIGQUIT,fun);
		sleep(10);

//	getchar();

}
























