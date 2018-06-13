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
	act.sa_handler = &fun;
	act.sa_flags = SA_NOCLDSTOP;
//	act.sa_flags = SA_NOCLDWAIT;
	pid = fork();
	if(pid > 0){
		printf("parent :\n");
//		usleep(10);
		sigaction(SIGCHLD,&act,NULL);
		pause();
		sleep(40);
	}
	else if(pid == 0){
		printf("child :\n");
		printf("child id = %d\n",getpid());
//		kill(getppid(),SIGCHLD);
		exit(0);
		}
}
	
