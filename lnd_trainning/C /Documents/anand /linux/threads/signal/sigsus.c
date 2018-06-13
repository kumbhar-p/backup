#include<stdio.h>
#include<sys/types.h>
#include<signal.h>

int pid;
FILE *fp;
struct sigaction act;
void fun(int num)
{
	fp = fopen("aaa","w+");
	fputs("signal detected",fp);
	
	printf(" i am in function:\n");
	printf("sfsddddddddyyyyyyyyyyyyyyyyyy\n");
}
int main(void)
{

//	sigset_t mask;
	//	act.sa_mask = SIGINT;
	 //sigset_t mask = SIGINT;
     sigemtyset(&act.sa_mask);
	while(1){
		printf("i am waiting for wake up:\n");
//		sigsuspend(&mask);
		}
		

}
























