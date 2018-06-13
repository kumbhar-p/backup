#include<stdio.h>
#include<unistd.h>

int main(void)
{
	int fd[2];
	char str[100];
	pipe(fd);
	pid_t pid = fork();

	if(pid > 0){  // parent process
		printf("in parent\n");
		printf("enter data\n");
		scanf("%s", str);
		write(fd[1], str, sizeof(str));
		close(fd[1]);
	}
	else if(pid == 0){ //child process
		
		printf("in child\n");
		read(fd[0], str, sizeof(str));
		printf("child : %s\n", str);
		close(fd[0]);
	}

	else {
		printf("fork failed\n");
	}


	return 0;
}
