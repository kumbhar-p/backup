#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
 
static void hdl (int sig, siginfo_t *siginfo, void *context)
{
	printf ("Sending PID: %ld, UID: %ld\n signo = %ld\n",(long)siginfo->si_pid, (long)siginfo->si_uid,(long)siginfo->si_signo);
}
 
int main (void)
{
	struct sigaction act;
	struct sigaction oldact;
 	int pid ;
 
	/* Use the sa_sigaction field because the handles has two additional parameters */
	act.sa_sigaction = &hdl;
 
	/* The SA_SIGINFO flag tells sigaction() to use the sa_sigaction field, not sa_handler. */
	act.sa_flags = SA_SIGINFO;
	pid = fork();
	if(pid > 0){

		printf("parent process:\n");
		}
	else if(pid == 0){
 
	if (sigaction(SIGINT, &act, &oldact) < 0) {
		perror ("sigaction");
		return 1;
	}
	}
 
//	while (1)
	//	sleep (1);
		pause();	
 
	return 0;
}
