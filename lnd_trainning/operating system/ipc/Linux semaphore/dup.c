#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(void)
{
	pid_t pid ;
	int fd[2];
	pipe(fd);
	perror("pipe");	
	pid = fork();
	if(pid > 0) {
		printf("parent process\n");
		close(1);
		dup(fd[1]);
		close(fd[0]);
		execlp("ls","ls", NULL);
		close(fd[1]);
	}
	else if(pid == 0) {
		printf("child process\n");
		close(0);
		dup(fd[0]);
		close(fd[1]);
		execlp("wc","wc", NULL);
		close(fd[0]);
	}
	else {
		printf("fork failed\n");
	}

	return 0;
}
