#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<signal.h>
#include<unistd.h>
void  fun(int num)
{
	
	printf("signal detected i am in function: %d\n",num);
	fflush(stdout);
	exit(0);
}

void function(int b)
{

    int a[2] = {1,5};
	signal(SIGILL,fun);
	a[5] = a[4] - 2;
//	pause();
}

int main(void)
{
	function(10);
	return 0;
	
}
























