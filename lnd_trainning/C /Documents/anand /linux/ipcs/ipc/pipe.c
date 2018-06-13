#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void)
{

	int  fd[2];
	pipe(fd);
	int pid;
	pid = fork();
	char buf[20];
	if(pid > 0){
//		sleep(6);
		printf("parent process :\n");
//		close(fd[1]);
	printf("%d\n",	write(fd[1],"aaaaaaaaaaa",20));
	}
	else if(pid == 0){
	//	close(fd[1]);
		close(fd[0]);
//		read(fd[0],buf,20);
//		printf("msg = %s\n",buf);
	}
		


}
