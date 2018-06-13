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
//	sigemptyset(&act.sa_mask);              /* here it allow all the signals when handler is executing */
//	sigaddset(&act.sa_mask,SIGINT);         /* here it block the specified signal while handler executing */
	ret = 	sigfillset(&act.sa_mask);       /* here it won't  allow any signals when handler is executing */
		  sigdelset(&act.sa_mask,SIGINT);	
	      sigdelset(&act.sa_mask,SIGALRM);	
	
	printf("return value = %d\n",ret);
	sigaction(sig, &act, NULL); 
	pause();
	
	
}
