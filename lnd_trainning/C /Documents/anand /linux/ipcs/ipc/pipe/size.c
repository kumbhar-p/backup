#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void)
{
	int  fd[2];
	pipe(fd);
	int pid;
	int i = 1;
	int ret;
	char buf[20];
	printf("sizeof pipe = %d\n",PIPE_BUF);
	pid = fork();
	char buf1 = 'a';
	if(pid > 0){
		printf("parent : \n");
		while(1){
			ret = write(fd[1],&buf1,1);
			printf("i = %d\n",i);
			i++;
			if(ret == -1)
				break;
		}
	}
	else if(pid == 0){
		printf("child process :\n");
	}
}
