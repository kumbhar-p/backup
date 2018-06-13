#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
#include<stdlib.h>
void fun(int num)
{
	printf("signal is detected with signal number :%d\n",num);
	exit(0);
}
int main(void)
{
	int *a = NULL;
	signal(SIGSEGV,fun);
	*a = 30;
	pause();
	//signal(SIGSEGV,fun);
	
//	getchar();

}
























