#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
int pid;
struct sigaction act;
//void (*fun2)(int, siginfo_t);
static void *fun2(int num,siginfo_t *sig,void *ptr )
{
//	pid_t  spid = sig->si_pid;	
    printf(" i am in function two------>:\n");
	printf("signo = %d\n",sig->si_signo);
	printf("errno = %d\n",sig->si_errno);
	printf("code = %d\n",sig->si_code);
//	printf("trapno = %d\n",sig->si_trapno);
    printf("pid = %d\n",sig->si_pid);
	printf("uid = %d\n",sig->si_uid);
	printf("status = %d\n",sig->si_status);
	printf("int = %d\n",sig->si_int);
	printf("over run = %d\n",sig->si_overrun);
	printf("timerid = %d\n",sig->si_timerid);
	printf("fd = %d\n",sig->si_fd);
}

void fun(int num)
{
	printf(" i am in function:\n");
}
int main(void)
{
	//fun2 = fun1;
	int sig;
	sig = SIGINT;
	pid = getpid();
	printf("parent process id = %d\n",getpid());
//	act.sa_handler = &fun2;
	act.sa_sigaction = &fun2;
//	sigemptyset(&act.sa_mask);
//    act.sa_handler = &fun;
	act.sa_flags |=  SA_SIGINFO ; 	
//	sigaction(sig, &act, NULL);
	sigaction(SIGINT, &act, NULL);
	sig = SIGINT;
	raise(sig);
//	sigaction(sig, &act, NULL);
//	pause();
//	getchar();
	
	
}
