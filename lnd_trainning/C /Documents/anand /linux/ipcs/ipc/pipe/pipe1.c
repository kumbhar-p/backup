#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void)
{

	int  fd[2];
	pipe(fd);
	int pid;
	char buf1[20];
	pid = fork();
	char buf[20];
	if(pid > 0){
		printf("parent process :\n");
		write(fd[1],"aaaaaaaaaaa",20);
		read(fd[0],buf1,20);
		printf("parent = %s\n",buf);
	}
	else if(pid == 0){
		printf("child process:\n");
		read(fd[0],buf,20);
		write(fd[1],"bbbbbbbbbbbb",20);
		printf("child = %s\n",buf);
	}
		


}
