#include<stdio.h>
#include<unistd.h>
int main(void)
{
	int fd[2];
	pipe(fd);
	int pid;
	char buf[10];
	pid = fork();
	if(pid > 0){
		printf("parent process :\n");
		printf("fd[0] = %d\n",fd[0]);
		printf("fd[1] = %d\n",fd[1]);
		
		close(0);
		dup(fd[0]);
		close(fd[1]);
		execlp("wc","wc",NULL);

		}
	else if(pid == 0){
		close(1);
		dup(fd[1]);
		close(fd[0]);
		execlp("ls","ls",NULL);
	}
}
