#include<stdio.h>
int main(void)
{
	int pid;	
	pid = fork();
	if(pid > 0){
		while(1){
		printf("parent :\n");
		sleep(2);
		}
	}
	else if(pid == 0){
		while(1){
		printf("child :\n");
		sleep(3);
		}
	}
}
