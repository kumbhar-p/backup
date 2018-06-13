#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
int pid;
struct sigaction act;
static void fun2(int num,siginfo_t *sig )
{
	pid_t  spid = sig->si_pid;	
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
	int sig;
	sig = SIGINT;
	pid = getpid();
	printf("parent process id = %d\n",getpid());
	act.sa_sigaction = *fun2;
//	sigemptyset(&act.sa_mask);
	act.sa_flags =  SA_NOCLDSTOP;
	pid = fork();
	if(pid >0) {
	usleep(1);
	 	
	sigaction(SIGCHLD, &act, NULL);
//	sleep(1);
	pause();
	}
	else if(pid == 0){
	printf(" i am in child process :\n");
	kill(getppid(),SIGCHLD);
//	signal(SIGCHLD,getppid());
	}
//	sig = SIGINT;
//	raise(sig);
//	sigaction(SIGCHLD, &act, NULL);
	raise(SIGCHLD);
//	pause();
//	getchar();
	
	
}
