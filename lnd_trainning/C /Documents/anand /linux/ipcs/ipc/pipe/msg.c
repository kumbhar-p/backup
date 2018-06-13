#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void)
{
	int  fd[2];
	int fd1[2];
	pipe(fd);
	pipe(fd1);
	int pid;
	char buf[20];
	char buf1[20];
	pid = fork();
	while(1){
	if(pid > 0){
		printf("enter message from parent :\n");
		fflush(stdin);
		fgets(buf,20,stdin);
		write(fd[1],buf,20);
		read(fd1[0],buf1,20);
		printf("message from child to parent : %s\n",buf1);
	}
	else if(pid == 0){
		fflush(stdin);
        fgets(buf1,20,stdin);
        write(fd1[1],buf1,20);
        read(fd[0],buf,20);
        printf("message from parent to child : %s\n",buf);
    }

	
}		


}
