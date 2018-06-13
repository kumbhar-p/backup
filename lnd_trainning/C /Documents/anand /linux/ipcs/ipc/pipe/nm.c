#include<stdio.h>
#include<unistd.h>
int main(int argc,char **argv)
{
	int fd[2];
	pipe(fd);
	int pid;
	char buf[10];
	pid = fork();
	if(pid > 0){
		printf("parent process :\n");
		close(0);
		dup(fd[0]);
		close(fd[1]);
		printf("parent stat = %d\n",execlp("grep","grep",argv[1],NULL));		
		}
	else if(pid == 0){
		printf("child process :\n");
		close(1);
		dup(fd[1]);
		close(fd[0]);
		printf("child stat = %d\n",	execlp("nm","nm",argv[0],NULL));
		
	}
}
