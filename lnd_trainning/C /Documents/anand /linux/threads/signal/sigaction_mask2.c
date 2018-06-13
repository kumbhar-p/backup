#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
int pid;
struct sigaction act;
struct sigaction oldact;
void fun(int num)
{
	printf("getpid = %d\n",getpid());
	printf(" i am in function:\n");
	while(1);
}
int main(void)
{
	int sig;
	sig = SIGQUIT;
	pid = getpid();
	int ret;
	printf("parent process id = %d\n",getpid());

	act.sa_handler = fun;    
//	sigfillset(&act.sa_mask);
	sigaddset(&act.sa_mask,SIGINT);         /* here it block the specified signal while handler executing */
//	ret = sigdelset(&act.sa_mask,SIGINT);	
	printf("return value = %d\n",ret);
	ret = sigaction(SIGQUIT, &act, NULL); 
	printf("return of sigaction = %d\n",ret);
	pause();
	
	
}
