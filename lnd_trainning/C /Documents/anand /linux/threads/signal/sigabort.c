#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
#include<stdlib.h>

int pid;
FILE *fp;
void fun(int num)
{
	printf("signal is detected with signal nuber = %d\n",num);

}
int main(void)
{
		int *ptr = malloc(100);
		signal(SIGABRT,fun);
//		abort();
		free(ptr);
		free(ptr);
//		sleep(10);

//	getchar();

}
























