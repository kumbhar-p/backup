#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
int pid;
struct sigaction act;
struct sigaction oldact;
void fun(int num)
{
	printf(" i am in function:\n");
}
int main(void)
{
	int sig;
//	sig = SIGINT;
//	sig = SIGQUIT;
	sig = SIGSEGV;
	pid = getpid();
	int ret;
	printf("parent process id = %d\n",getpid());
	//act.sa_handler = SIG_IGN;     // to ignore the applied signal through sigaction //
	act.sa_handler = SIG_DFL;     // to ignore the applied signal through sigaction //
	
	ret = sigaction(sig, &act, NULL);
	printf("return of sigaction = %d\n",ret);
//	pause();
	
	
}
