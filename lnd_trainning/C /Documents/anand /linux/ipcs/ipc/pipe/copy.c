#include<stdio.h>
#include<fcntl.h>
int main(void)
{
	int pid;
	int fd[2];
	char str[50];
	int fd1;
	int fd2;
	fd1 = open("anand.c",O_RDONLY);
	fd2 = open("anand2.c",O_WRONLY);
	pipe(fd);
	pid = fork();
	if(pid > 0){
		printf("parent :\n");
		printf("parent read = %d\n"	,read(fd1,str,50));
    	printf("parent write = %d\n",write(fd[1],str,50));
		}
	else if(pid == 0){
		printf("child :\n");
		printf("child read = %d\n",read(fd[0],str,50));
		printf("child write = %d\n",write(fd2,str,50));
	}
}
	
