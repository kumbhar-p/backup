#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void my_isr(int n)
{
	printf("in isr\n");
	
}

int main()
{
	int ret;
	printf("hello\n");
	ret = alarm(2);
	signal(SIGALRM, my_isr);
	printf("%d\n",ret);
	return 0;
}
