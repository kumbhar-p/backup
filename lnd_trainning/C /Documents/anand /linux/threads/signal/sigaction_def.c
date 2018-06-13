#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
int pid;
struct sigaction act;
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
	act.sa_handler = fun;
//	act.sa_flags =  SA_RESETHAND;
//	act.sa_flags =  SA_SIGINFO;
	pid = fork();
	if(pid >0) {
	usleep(1);
	 	
	printf("ret = %d\n",sigaction(SIGINT, &act, NULL));
//	sleep(1);
	pause();
	}
	else if(pid == 0){
	printf(" i am in child process :\n");
	kill(getppid(),SIGINT);
//	signal(SIGCHLD,getppid());
	}
	
}
