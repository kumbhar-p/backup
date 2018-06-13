#include<stdio.h>
#include<unistd.h>
int main(void)
{
	int fd[2];
	pipe(fd);
	int pid;
	pid = fork();
	if(pid > 0){
		printf("parent process :\n");
		close(0);
		dup(fd[0]);
		close(fd[1]);
		execlp("wc","wc",NULL);
//		execlp("ls","ls",NULL);
		}
	else if(pid == 0){
		close(1);
		dup(fd[1]);
		close(fd[0]);
		execlp("ls","ls",NULL);
	//	execlp("wc","wc",NULL);
	}
}
