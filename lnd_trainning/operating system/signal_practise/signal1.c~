#include<stdio.h>
#include<signal.h>

void my_isr(int sig_num)
{
	printf("in isr.....\n");
	return;
}

int main(void)
{
	pid_t ret;
	int status;

	ret = fork();
	
	if(ret > 0) {
		printf("In parent...\n");
		signal(SIGUSR1, my_isr);
		printf("wating for signal\n");
		pause();
		printf("waiting for child exit\n");	
		sleep(5);	
//		wait(&status);	
		printf("parent exited\n");
	}
	else if(ret == 0) {
		printf("In child...\n");
		printf("child sending signal  %d\n",getppid());
		sleep(2);
		kill(getppid(), SIGUSR1);
		sleep(1);
		printf("child exited\n");
	}
		
	return 0;
}
