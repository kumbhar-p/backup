#include<stdio.h>
#include<signal.h>
int main(void)
{
	void (*val)(int);
	     signal(SIGALRM,SIG_IGN);
	     val =  signal(SIGALRM,SIG_DFL);
	if(val == SIG_DFL)
		printf("default ------------>\n");
	else if(val == SIG_IGN)
		printf("ignore--------------->\n");
}
