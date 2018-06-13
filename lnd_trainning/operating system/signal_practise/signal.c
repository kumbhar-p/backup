#include<stdio.h>
#include<signal.h>

void my_isr(int sig_num)
{
	printf("in isr.....\n");
	return;
}

int main(void)
{
	printf("hello world\n");
	signal(SIGINT, my_isr);
	printf("hai.......\n");
	pause();
	return 0;
}
