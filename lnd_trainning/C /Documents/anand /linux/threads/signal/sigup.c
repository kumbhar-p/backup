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
	printf("pid = %d\n",getpid());
	printf("ppid = %d\n",getppid());
	signal(SIGHUP,fun);
	pause();
}
























