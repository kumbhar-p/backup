#include<stdio.h>
#include<signal.h>
sigset_t set;
void fun(int num)
{
	printf("signal caught : %d\n",num);
	while(1);

}
int main(void)
{
	int a = 30;
	sigemptyset(&set);
	sigaddset(&set,SIGQUIT);
	sigprocmask(SIG_BLOCK,&set,NULL);
	signal(SIGINT,&fun);
	pause();
}
	
